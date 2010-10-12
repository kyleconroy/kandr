/* Exercise 1-19
   Write a function reverse(s) which reverses a given string. Use it to 
   write a program which reverses all of its strings
*/

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void reverse(char to[], int len);

/* print longest line */
int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0) {
        /* We dont reverse the new lines */
        reverse(line, len - 2);
        printf("%s", line);
    }
    return 0;

}

void reverse(char s[], int len) 
{
    char tmp;
    for (int i = 0; i < len; i++) {
        tmp = s[i];
        s[i] = s[len-i];
        s[len-i] = tmp;
    }
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
