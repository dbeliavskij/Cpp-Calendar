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
            todayplan();
            break;

        case 2:
            customplan();
            break;
        case 3:
            createplan();


    }

    return 0;
}
