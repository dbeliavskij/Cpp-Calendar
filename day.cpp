#include "day.h"

Day::Day() {
//    for (int a=0; a<24; a++) {
//        plan[a]="No plans yet";
//    }
}

void Day::createplan(int h, string text) {
    plan[h]=text;
}
void Day::showplan() {
    for (int a=0; a<24; a++) {
        cout<<setfill(' ')<<setw(2)<<right<<a<<" h: "<<setw(50)<<left<<plan[a]<<"\n";
    }
}
