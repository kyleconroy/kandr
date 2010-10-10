/*  Exercise 1-14
    Write a program to print out a histogram of the types of characters seen
    */
    
#include <stdio.h>

#define MAXCHAR 127

int main()
{
    int c;
    int freq[MAXCHAR];
    
    int i, j;
    for (i = 0; i < MAXCHAR; i++){
        freq[i] = 0;
    }
    
    while ((c = getchar()) != EOF) {
        ++freq[c];
    }
    
    printf("Char\tCount\n");
    for (i = 0; i < MAXCHAR; i++){
        if(freq[i] > 0) {
            printf("%4c\t", i);
            for (j = 0; j < freq[i]; j++)
                putchar('=');
            printf("[%d]\n", freq[i]);
        }
    }
    
    return 0;
}