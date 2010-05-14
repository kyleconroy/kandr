/*  Exercise 1-6
    Verify that the expression getchar() != EOF is 0 or 1
    */
    
#include <stdio.h>
    
int main()
{
    int c;
    
    while(1){
        int result = (c = getchar()) != EOF;
        
        if (result == 1){
            printf("result == 1\n");
            c = getchar();
        } else if (result == 0){
            printf("result == 0\n");
            exit();
        } else {
            //This will never be printed
            printf("result is not 1 or 0");
        }
    }
}