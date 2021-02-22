#ifndef MAJOR_AND_MINOR_H_
#define MAJOR_AND_MINOR_H_

typedef enum {
    MajorColor_WHITE ,
    MajorColor_RED,
    MajorColor_BLACK,
    MajorColor_YELLOW,
    MajorColor_VIOLET,
    MajorColor_TotalNumber
    } MajorColor_tst;
    
typedef enum {
    MinorColor_BLUE,
    MinorColor_ORANGE, 
    MinorColor_GREEN, 
    MinorColor_BROWN,
    MinorColor_SLATE,
    MinorColor_TotalNumber
    } MinorColor_tst;

#define MINORCOLORNAME_MAXCHARS     ((int)6)
extern const char * MinorColorToString(MinorColor_tst minorcolor);

#define MAJORCOLORNAME_MAXCHARS     ((int)6)
extern const char * MajorColorToString(MajorColor_tst majorcolor );

#endif  /*MAJOR_AND_MINOR_H_*/