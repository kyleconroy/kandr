/* Exercise 1-17
   Write a program to print all input lines that are longer than 80 characters
*/

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest line */
int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
        if (len > 80)
            printf("%s\n", line);
    return 0;
}


int getline(char s[], int lim)
{
    int c, i;
    for (i=0; (c=getchar())!=EOF && c!='\n'; ++i)
        if (i < lim-1)
            s[i] = c;

    if (c == '\n') {
        if (i < lim-1)
            s[i] = c;
        ++i;
    }
    
    if (i < lim-1)
        s[i] = '\0';
    else
        s[lim-1] = '\0';

    return i;
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
