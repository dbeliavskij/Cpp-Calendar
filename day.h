#ifndef DAY_H
#define DAY_H
#include "lib.h"


class Day
{
    public:
        Day();
        void createplan(int h, string text);
        void showplan();
        int isplan();

    protected:
        string plan [24];

    private:
};

static Day month[30];
int calcshow(Day month[]);
int menu(Day month[]);
#endif // DAY_H
