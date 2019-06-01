#ifndef DAY_H
#define DAY_H
#include "lib.h"


class Day
{
    public:
        Day();
        void createplan(int h, string text);
        void showplan();

    protected:
        string plan [24];

    private:
};

static Day month[29];

#endif // DAY_H
