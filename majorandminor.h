#ifndef MAJOR_AND_MINOR_H_
#define MAJOR_AND_MINOR_H_

typedef enum {WHITE,RED,BLACK,YELLOW,VIOLET,Major_TotalNumber} MajorColor_tst;
    
typedef enum {BLUE,ORANGE, GREEN, BROWN,SLATE,Minor_TotalNumber} MinorColor_tst;

#define MINORCOLORNAME_MAXCHARS     ((int)6)
extern const char * MinorColorToString(MinorColor_tst minorcolor);

#define MAJORCOLORNAME_MAXCHARS     ((int)6)
extern const char * MajorColorToString(MajorColor_tst majorcolor );

#endif  /*MAJOR_AND_MINOR_H_*/
