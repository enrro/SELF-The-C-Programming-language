#include <stdio.h>
#define MAXLINE 1000
#define MAX_LENGTH 80
/* Exercise 1-18. Write a program to remove trailing blanks and tabs from each
line of input, and to delete entirely blank lines */

/*getline is a function in stdio since 2010 so I changed the name*/
int get_line(char line[], int maxline);

/*print longest input line*/
int main()
{

    int end, i, len;    /*current line length*/
    char line[MAXLINE];     /*current input line */

    while((len = get_line(line, MAXLINE)) > 0){
        end = len;
        for (i = len - 2; i >= 0; i--)
            if (line[i] == ' ' || line[i] == '\t')
                end = i;
            else
                break;

        if (end < len) {
            line[end] = '\n';
            line[end + 1] = '\0';
            len = end + 1;
        }
        if (len == 1)
            continue;
        printf("%2d: %s", end, line);
    }
        
    return 0;
}


/* getline: read a line into s, return length */
int get_line(char s[], int lim)
{
    int c, i;
    for(i=0; lim-1 && (c=getchar())!= EOF && c!= '\n';i++)
        s[i] = c;
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
