// Given a Expression : 10*2 + 6
// Output : 26

// Code :

#include <bits/stdc++.h>
using namespace std;
 
// Evaluating Expressions (Infix)

int precedence(char op){
    if(op=='+' || op=='-') return 1;
    if(op=='*' || op=='/') return 2;
    return 0;
}

int operatorApply(int a, int b, char op){
    if(op=='+') return a+b;
    else if(op=='-') return a-b;
    else if(op=='*') return a*b;
    else return a/b;

}

int evaluate(string tokens){

    // firstly we have to store integer values in 1 stack and operator values in another stack
    stack<int> values;
    stack<char> ops;

    // now traverse the tokens and check wether :

    for(int i=0;i<tokens.length();i++){

        // if we got opening braces at first : push into ops stack
        if(tokens[i]=='('){
            ops.push(tokens[i]);
        }

        // if we got number : push it into values stack
        else if(isdigit(tokens[i])){
            int val =0;

            // what if we have a number more than one digit
            while(i<tokens.length() && isdigit(tokens[i])){
                val = (val * 10) + (tokens[i] - '0');
                i++; 
            }

            values.push(val);


            // now the i points to the character next to the digit and the for loop also do i++ so we need to go back 1 step
            i--;
        }

        // if we got an closing braces, then solve the entire brace
        else if(tokens[i] == ')'){

            while(!ops.empty() && ops.top()!='('){

                int val2 = values.top();
                values.pop();

                int val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(operatorApply(val1,val2,op));
            }

            // also pop the opening brace, which corresponds to the closing brace
            if(!ops.empty()){
                ops.pop();
            }
        }



        // if we got an operator while traversing token string
        else{

            // then , according to the precedence: 
            // while top of ops has the same or greater precedence to current token, which is an operator.
            // Apply operator on top of Ops stack to the top two elements of values stack.

            while(!ops.empty() && precedence(ops.top()) >= precedence(tokens[i])){
                int val2 = values.top();
                values.pop();

                int val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(operatorApply(val1,val2,op));
                
            }

            ops.push(tokens[i]);
        }

    }

    // now entire expression has been parsed at this point, apply remaining ops to remaining values.
    while(!ops.empty()){
        int val2 = values.top();
        values.pop();

        int val1 = values.top();
        values.pop();

        char op = ops.top();
        ops.pop();

        values.push(operatorApply(val1,val2,op));
    }

    return values.top();
}

int main(){

    string tokens;
    cin>>tokens;

    cout<<evaluate(tokens)<<endl;

    return 0;
}
