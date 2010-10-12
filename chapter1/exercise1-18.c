/* Exercise 1-18
   Write a program to remove trailing blanks and tabs from each line of input. 
   Delete blank lines.\k
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

    while ((len = getline(line, MAXLINE)) > 0) {
        /* Remove trailing whitespace */
        for (int i = len - 2; i >= 0; i--){
            if (line[i] != ' ' && line[i] != '\t') {
                line[i+1] = '\n';
                line[i+2] = '\0';
                break;
            }
        }
        printf("%s", line);
    }
    return 0;

}

int getline(char s[], int lim)
{
    int c, i;
    for (i=0; i < lim -1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    
    s[i] = '\0';
    return i;
}
