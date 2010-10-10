/*  Exercise 1-13
    Write a program to print a histogram of the lengths of the words in its 
    input.
    */
    
#include <stdio.h>
#define IN 1
#define OUT 0
#define MAXWORD 2000

int main()
{
    int c, nl, nw, nc, wl, state, maxlength;
    int wlength[MAXWORD];
    
    state = OUT;
    nl = nw = nc = wl = maxlength = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
            
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            
            if (wl > maxlength)
                maxlength = wl;
                
            ++wlength[wl];
            ++nw;
            state = IN;
            wl = 0;
        }
        
        if (state == IN)
            ++wl;
    }
    
    int i, j;
    printf("Length\tCount\n");
    for (i = 0; i < maxlength; i++){
        printf("%6d\t", i);
        for (j = 0; j < wlength[i]; j++)
            putchar('=');
        printf("[%d]\n", wlength[i]);
    }
    
    return 0;
}