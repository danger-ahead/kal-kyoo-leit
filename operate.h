//
// Created by danger-ahead on 23/03/21.
//

#ifndef CALCULATE_OPERATE_H
#define CALCULATE_OPERATE_H

class operate{
    int precedence(char op);
    int applyOp(int a, int b, char op);
    int check(int x);

public:
    int evaluate(string tokens);
};


#endif //CALCULATE_OPERATE_H
