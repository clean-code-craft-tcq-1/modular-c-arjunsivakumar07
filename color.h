#ifndef COLOR_H_
#define COLOR_H_

#include "majorandminor.h"  

typedef struct {
    MajorColor_tst majorColor;
    MinorColor_tst minorColor;
} ColorPair;


#define COLORPAIRNAME_EXTRABUFFLEN      ((int)4)
#define COLORPAIRNAME_MAXCHARS  (MAJORCOLORNAME_MAXCHARS + MINORCOLORNAME_MAXCHARS + COLORPAIRNAME_EXTRABUFFLEN)
     

extern void ColorPairToString(const ColorPair* colorPair, char* buffer);

extern ColorPair GetColorFromPairNumber(int pairNumber);

extern int GetPairNumberFromColor(const ColorPair* colorPair);

#endif  /*COLOR_H_*/
