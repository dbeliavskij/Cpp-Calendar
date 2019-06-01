#include "lib.h"

int createplan() {

    int d, h;
    string text;

    cout<<"Please input a day, where you want to create a plan\n";
    cin>>d;
    cout<<"Please input a hour, where you want to create a plan\n";
    cin>>h;
    cout<<"Please input text of a plan\n";
    cin>>text;

    month[d-1].createplan(h, text);


    return 0;
}
