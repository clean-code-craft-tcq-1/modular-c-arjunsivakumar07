#include <stdio.h>
#include "Test.h"

void manual(void)
{
    int majorcolor, minorcolor;
    ColorPair colorpair;
    for(majorcolor =0; majorcolor < Major_TotalNumber ; majorcolor++)
    {
        for(minorcolor =0; minorcolor < Minor_TotalNumber ; minorcolor++)
        {
            colorpair.majorColor = ((MajorColor_tst)majorcolor);
            colorpair.minorColor = ((MinorColor_tst)minorcolor);
            printf(" %s %s %d \n",MajorColorToString(colorpair.majorColor),MinorColorToString(colorpair.minorColor),GetPairNumberFromColor(&colorpair));
        }
    }
}

int main()
{
  
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
  
    manual();
    return 0;
}
