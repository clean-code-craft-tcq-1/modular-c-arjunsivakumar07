#include <stdio.h>         
#include "color.h"      

void ColorPairToString(const ColorPair* colorPair, char* buffer)
{
   sprintf(buffer, "%s %s", MajorColorToString(colorPair->majorColor),
                             MinorColorToString(colorPair->minorColor));
        
}

ColorPair GetColorFromPairNumber(int pairNumber)
{
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = (MajorColor_tst)(zeroBasedPairNumber / MinorColor_TotalNumber);
    colorPair.minorColor = (MinorColor_tst)(zeroBasedPairNumber % MinorColor_TotalNumber);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair)
{
    int PairNumber;
    PairNumber = (colorPair->majorColor * MinorColor_TotalNumber) + (colorPair->minorColor) + 1;
    return PairNumber;
}
