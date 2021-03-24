//
// Created by danger-ahead on 22/03/21.
//

#include "printer.h"

void printer::help() {
    printf("For arithmetic operations containing ^, (), /, *, + and -,\ntype the query without putting any blank-space in between the operands and operators.\n"
           "For example: 18/9*(6+3)-2\n\n");
}

void printer::printWelcome() {
    printf(" _____________________\n"
           "|               CASIO |\n"
           "|  _________________  |\n"
           "| | type ? for help | |\n"
           "| |_________________| |\n"
           "|  ___ ___ ___   ___  |\n"
           "| | 7 | 8 | 9 | | + | |\n"
           "| |___|___|___| |___| |\n"
           "| | 4 | 5 | 6 | | - | |\n"
           "| |___|___|___| |___| |\n"
           "| | 1 | 2 | 3 | | x | |\n"
           "| |___|___|___| |___| |\n"
           "| | . | 0 | = | | / | |\n"
           "| |___|___|___| |___| |\n"
           "|_____________________|\n\n");
}