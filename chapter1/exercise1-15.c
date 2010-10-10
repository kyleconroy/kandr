/*  Exercise 1-15
    Rewrite the temperate conversion program in Section 1.2 to use functions
    */

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahr_to_cels(int fahr);

int main()
{
    int fahr;
    
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, fahr_to_cels(fahr));
    
    return 0;
}

float fahr_to_cels(int fahr){
    return (5.0/9.0) * (fahr - 32);
}
