/*  Exercise 1-9
    Write a program to copy its input to its output, replacing each string
    of one or more blanks by a single blank
    */
    
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int c;
    bool seenblank = false;

    while((c = getchar()) != EOF){
        if (c == ' ' && !seenblank) {
            seenblank = true;
            putchar(c);
        } else if (c != ' ') {
            seenblank = false;
        }
        
        if (!seenblank)
            putchar(c);
    }
}