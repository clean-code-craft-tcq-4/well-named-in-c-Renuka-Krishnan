#include<stdio.h>
#include "color_code.h"
#include "color_code_generation.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}


ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}



int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}

void print_reference_manual(void)
{
    int i=0,j=0,pair_number = 1;
    printf(" Reference manual \n");
    printf(" Pair number  Major Color  Minor Color \n");
   
    for(i = 0; i< numberOfMajorColors; i++)
    {
        for(j = 0; j < numberOfMinorColors; j++)
        {
            printf("   %d \t    %s\t  %s\t\n",pair_number++, MajorColorNames[i], MinorColorNames[j]);
        }
    } 
}
