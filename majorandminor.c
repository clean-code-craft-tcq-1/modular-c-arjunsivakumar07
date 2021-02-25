#include "majorandminor.h"         

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

const char * MinorColorToString(MinorColor_tst minorcolor)
{
    return (MinorColorNames[minorcolor]);
}

const char * MajorColorToString(MajorColor_tst majorcolor )
{
    return MajorColorNames[majorcolor];
}
