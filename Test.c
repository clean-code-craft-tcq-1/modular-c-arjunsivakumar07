#include <stdio.h>
#include <assert.h>
#include "Test.h"

void testNumberToPair(int pairNumber,MajorColor_tst expectedMajor, MinorColor_tst expectedMinor)
{
    ColorPair colorPair;
    char colorPairNames[COLORPAIRNAME_MAXCHARS];

    colorPair = GetColorFromPairNumber(pairNumber);
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);

    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

void testPairToNumber(MajorColor_tst major, MinorColor_tst minor, int expectedPairNumber)
{
    ColorPair colorPair;
    int pairNumber;

    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    
    assert(pairNumber == expectedPairNumber);
}