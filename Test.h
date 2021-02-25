#ifndef TEST_H_
#define TEST_H_

#include "color.h"

extern void testNumberToPair(int pairNumber,MajorColor_tst expectedMajor, MinorColor_tst expectedMinor);

extern void testPairToNumber(MajorColor_tst major, MinorColor_tst minor, int expectedPairNumber);

#endif  /*COLOR_CODE_H_*/