#include <stdio.h>
#define MAXLINE 1000
#define MAX_LENGTH 80
/* Exercise 1-17. Write a program to print all input lines that are longer than 80
characters. */

/*getline is a function in stdio since 2010 so I changed the name*/
int get_line(char line[], int maxline);

/*print longest input line*/
int main()
{

    int len;    /*current line length*/
    char line[MAXLINE];     /*current input line */

    while((len = get_line(line, MAXLINE)) > 0)
        if(len>MAX_LENGTH){
            printf("%s", line);
        }
        
    return 0;
}


/* getline: read a line into s, return length */
int get_line(char s[], int lim)
{
    int c, i;
    int l;  /* new counter to make sure we keep counting after the array limit has been reached.*/
    for(i=0, l=0; (c=getchar())!= EOF && c!= '\n';i++){
        if(i<lim-1)
            s[l++] = c;
    }
    if(c == '\n'){
        if(l < lim -1)
            s[l++] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}
