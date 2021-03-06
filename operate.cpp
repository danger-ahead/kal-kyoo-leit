//
// Created by danger-ahead on 23/03/21.
//
#include <bits/stdc++.h>
using namespace std;
#include "operate.h"

int operate::check(int x){
    if (x == 0)
        throw runtime_error("Error");
    else
        return x;
}

int operate::precedence(char op){
    if(op == '+'||op == '-')
        return 1;
    if(op == '*'||op == '/')
        return 2;
    if(op == '^')
        return 3;
    return 0;
}

int operate::applyOp(int a, int b, char op){
    switch(op){
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            try {
                if (check(b))
                    return a/b;
            }
            catch (...) {
                cout << "Error! Division by ";
                return 0;
            }
        case '^': return pow(a,b);
    }
    return 0;
}

int operate::evaluate(string tokens){
    int i;

    stack <int> values;

    stack <char> ops;

    for(i = 0; i < tokens.length(); i++){

        if(tokens[i] == ' ')
            continue;

        else if(tokens[i] == '('){
            ops.push(tokens[i]);
        }

        else if(isdigit(tokens[i])){
            int val = 0;

            while(i < tokens.length() &&
                  isdigit(tokens[i]))
            {
                val = (val*10) + (tokens[i]-'0');
                i++;
            }

            values.push(val);

            i--;
        }

        else if(tokens[i] == ')')
        {
            while(!ops.empty() && ops.top() != '(')
            {
                int val2 = values.top();
                values.pop();

                int val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(applyOp(val1, val2, op));
            }

            if(!ops.empty())
                ops.pop();
        }

        else
        {
            while(!ops.empty() && precedence(ops.top()) >= precedence(tokens[i])){
                int val2 = values.top();
                values.pop();

                int val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(applyOp(val1, val2, op));
            }

            ops.push(tokens[i]);
        }
    }

    while(!ops.empty()){
        int val2 = values.top();
        values.pop();

        int val1 = values.top();
        values.pop();

        char op = ops.top();
        ops.pop();

        values.push(applyOp(val1, val2, op));
    }

    return values.top();
}

