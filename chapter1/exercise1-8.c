/*  Exercise 1-8
    Write a program that counts blanks, tabs, and newlines
    */
    
#include <stdio.h>

int main()
{
    long nl, ns, nt;
    int c;
    
    nl = ns = nt = 0;
    
    while((c = getchar()) != EOF){
        if (c == ' ')
            ++ns;
        else if (c == '\t')
            ++nt;
        else if (c == '\n')
            ++nl;
    }
    
    printf("Number of tabs: %ld\n", nt);
    printf("Number of spaces: %ld\n", ns);
    printf("Number of lines: %ld\n", nl);
}