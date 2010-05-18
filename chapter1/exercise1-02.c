/*  Exercise 1-2
    Experiment to find out what happens when printf's argument string
    contains \c, where c is some character not listed above
    */

#include <stdio.h>

int main()
{
    printf("hel\lo, \world\n");
}

/* When including unknown escape sequences, Clang throws "unknown escape 
sequences" warnings. Clang simply prints the escaped character */
