#include <iostream>
#include "printer.h"
#include "operate.h"

using namespace std;

int main(){

    printer pr;
    pr.printWelcome();

    string s,s2="?";
    cin>>s;
    cout<<"\n";
    if(s == s2)
        pr.help();
    else{
        operate op;
        cout<<op.evaluate(s)<<"\n";
    }

    return 0;
}