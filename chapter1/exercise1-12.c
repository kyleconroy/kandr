/*  Exercise 1-12
    Write a program that prints its input one word per line
    */
    
#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, nl, nw, nc, wl, state;
    
    state = OUT;
    nl = nw = nc = wl = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
            
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            putchar('\n');
            state = IN;
            wl = 0;
            ++nw;
        }
        
        if (state == IN)
            ++wl;
            putchar(c);
    }
    
    return 0;
}