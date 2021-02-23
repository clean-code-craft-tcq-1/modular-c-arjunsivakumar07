#include <stdio.h>
#include "Test.h"

void manual(void)
{
    int majorcolor, minorcolor;
    ColorPair colorpair;
    for(majorcolor =0; majorcolor < MajorColor_TotalNumber ; majorcolor++)
    {
        for(minorcolor =0; minorcolor < MinorColor_TotalNumber ; minorcolor++)
        {
            colorpair.majorColor = ((MajorColor_tst)majorcolor);
            colorpair.minorColor = ((MinorColor_tst)minorcolor);
            printf(" %s %s %d \n",MajorColorToString(colorpair.majorColor),MinorColorToString(colorpair.minorColor),GetPairNumberFromColor(&colorpair));
        }
    }
}

int main()
{
  
    testNumberToPair(4, MajorColor_WHITE, MinorColor_BROWN);
    testNumberToPair(5, MajorColor_WHITE, MinorColor_SLATE);

    testPairToNumber(MajorColor_BLACK, MinorColor_ORANGE, 12);
    testPairToNumber(MajorColor_VIOLET, MinorColor_SLATE, 25);
  
    manual();
    return 0;
}
