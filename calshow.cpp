#include "lib.h"


int calcshow(Day month[]) {

    system("CLS");
    time_t rawtime;
    rawtime=time(NULL);
    struct tm * loctime;
    loctime=localtime(&rawtime);
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, conscolor);
    switch (loctime -> tm_mon) {
    case 0:
        cout<<setfill(' ')<<setw(consw/2)<<right<<"January"<<endl;
        break;

    case 1:
        cout<<setfill(' ')<<setw(consw/2)<<right<<"February"<<endl;
        break;
    case 2:
        cout<<setfill(' ')<<setw(consw/2)<<right<<"March"<<endl;
        break;
    case 3:
        cout<<setfill(' ')<<setw(consw/2)<<right<<"April"<<endl;
        break;

    case 4:
        cout<<setfill(' ')<<setw(consw/2)<<right<<"May"<<endl;
        break;

    case 5:
        cout<<setfill(' ')<<setw(consw/2)<<right<<"June"<<endl;
        break;

    case 6:
        cout<<setfill(' ')<<setw(consw/2)<<right<<"Jule"<<endl;
        break;

    case 7:
        cout<<setfill(' ')<<setw(consw/2)<<right<<"August"<<endl;
        break;

    case 8:
        cout<<setfill(' ')<<setw(consw/2)<<right<<"September"<<endl;
        break;

    case 9:
        cout<<setfill(' ')<<setw(consw/2)<<right<<"October"<<endl;
        break;

    case 10:
        cout<<setfill(' ')<<setw(consw/2)<<right<<"November"<<endl;
        break;

    case 11:
        cout<<setfill(' ')<<setw(consw/2)<<right<<"December"<<endl;
        break;
    }
    cout<<setw(consw+2)<<setfill('*')<<"\n";
    cout<<setfill(' ')<<setw(consw/2+1)<<left<<'*'<<setw(consw/2)<<right<<'*'<<"\n";
    cout<<setfill(' ')<<'*'<<setw((consw/7)-1)<<setfill(' ')<<left<<" Monday"
    <<setfill(' ')<<'*'<<setw((consw/7)-1)<<setfill(' ')<<left<<" Tuesday"
    <<setfill(' ')<<'*'<<setw((consw/7)-1)<<setfill(' ')<<left<<" Wednesday"
    <<setfill(' ')<<'*'<<setw((consw/7)-1)<<setfill(' ')<<left<<" Thursday"
    <<setfill(' ')<<'*'<<setw((consw/7)-1)<<setfill(' ')<<left<<" Friday"
    <<setfill(' ')<<'*'<<setw((consw/7)-1)<<setfill(' ')<<left<<" Saturday"
    <<setfill(' ')<<'*'<<setw((consw/7)-1)<<setfill(' ')<<left<<" Sunday"<<'*'<<"\n";
    cout<<setw(consw/2+1)<<left<<'*'<<setw(consw/2)<<right<<'*'<<"\n";
    cout<<setw(consw+2)<<setfill('*')<<"\n";
    int d=0;
    for (int z=0; z<5; z++) {
        cout<<setfill(' ')<<'*'<<setw((consw/7))<<setfill(' ');
    }
    for (int z=0; z<2; z++) {
        cout<<setfill(' ')<<'*';
            if (month[d].isplan()==1){
                SetConsoleTextAttribute(hConsole, plancolor);
            }
        cout<<setw((consw/7)-1)<<setfill(' ')<<d+1;
        d++;
        SetConsoleTextAttribute(hConsole, conscolor);
    }
    cout<<"*\n";
    for (int i=0; i<4; i++) {
            for (int a = 0; a<7; a++) {
        cout<<setfill(' ')<<'*';
            if (month[d].isplan()==1){
                SetConsoleTextAttribute(hConsole, plancolor);
            }
        cout<<setw((consw/7)-1)<<setfill(' ')<<d+1;
        d++;
        SetConsoleTextAttribute(hConsole, conscolor);
    }
        cout<<"*\n";
    }

    cout<<setw(consw+2)<<setfill('*')<<"\n";
    SetConsoleTextAttribute(hConsole, 7);
    return 0;

}
