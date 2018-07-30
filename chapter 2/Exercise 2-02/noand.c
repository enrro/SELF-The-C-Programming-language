#include <stdio.h>
#define MAXLINE 1000

//read a line return its length
int main(){

    int i, c;
    i = 0;
    char line[MAXLINE];

    while(i<MAXLINE-1){
        if((c = getchar()) == EOF)
            break;
        line[++i] = c;
        if(c == '\n')
            break;
    }
    printf("%s %d \n", line, i);
    return 0;
}