#include <stdio.h>
#include "Test.h"
int main()
{
  
    testNumberToPair(4, MajorColor_WHITE, MinorColor_BROWN);
    testNumberToPair(5, MajorColor_WHITE, MinorColor_SLATE);

    testPairToNumber(MajorColor_BLACK, MinorColor_ORANGE, 12);
    testPairToNumber(MajorColor_VIOLET, MinorColor_SLATE, 25);

    return 0;
}
