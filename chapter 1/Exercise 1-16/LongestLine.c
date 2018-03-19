#include <stdio.h>
#define MAXLINE 1000

/* Exercise 1-16 Revise the main routine of the longest-line program so it will
correctly print the length of arbitrarily long input lines, and as much as possible
of the text */

/*getline is a function in stdio since 2010 so I changed the name*/
int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/*print longest input line*/
int main()
{

    int len;    /*current line length*/
    int max;    /*maximum length seen so far*/
    char line[MAXLINE];     /*current input line */
    char longest[MAXLINE];  /*longest line saved here*/

    max = 0;
    while((len = get_line(line, MAXLINE)) > 0)
        if(len>max){
            max = len;
            copy(longest, line);
        }
    if(max >0){      /*there was a line*/
        printf("The longest line is: \n");
        printf("%s", longest);
        printf("The length of it is %d. \n", max);
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

/*copy: copy 'from' into 'to'; assume to is big enough*/
void copy(char to[], char from[])
{
    int i;

    i=0;
    while((to[i] = from[i]) != '\0')
        ++i;
}