#include "lib.h"

int menu () {
    int choose=0;
    cout<<"Please choose an action\n"
    <<"1. View plan for today\n"
    <<"2. View plan for custom day\n"
    <<"3. Create plan\n";
    cin>>choose;

    switch (choose) {

        case 1:
//            todayplan();
                month[1].showplan();
            break;

        case 2:
//            customplan();
            break;
        case 3:
            int d, h;
            string text="Hi";

            cout<<"Please input a day, where you want to create a plan\n";
            cin>>d;
            cout<<"Please input a hour, where you want to create a plan\n";
            cin>>h;
            cout<<"Please input text of a plan\n";
            month[d-1].createplan(h, text);
            break;



    }

    return 0;
}
