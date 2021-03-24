#include <iostream>
#include "printer.h"
#include "operate.h"

using namespace std;

int main(){

    printer pr;
    pr.printWelcome();

    string s;

    while(s != "exit"){

        cin>>s;

        if(s == "?")
            pr.help();
        else{
            operate op;
            cout<<op.evaluate(s)<<"\n\n";
        }
    }

    return 0;
}