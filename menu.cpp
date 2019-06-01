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
            time_t rawtime;
            rawtime=time(NULL);
            struct tm * loctime;
            loctime=localtime(&rawtime);
            cout<<"Showing plan for "<<loctime -> tm_mday<<" day:\n";
            month[loctime -> tm_mday].showplan();
            break;

        case 2:

            break;
        case 3:
            int d, h;
            string text;

            cout<<"Please input a day, where you want to create a plan\n";
            cin>>d;
            cout<<"Please input a hour, where you want to create a plan\n";
            cin>>h;
            cout<<"Please input text of a plan\n";
            cin.ignore();
            std::getline(cin, text);
            month[d-1].createplan(h, text);
            break;



    }

    return 0;
}
