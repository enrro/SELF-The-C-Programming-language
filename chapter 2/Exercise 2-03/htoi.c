#include <stdio.h>
#define MAX_LINE 2000

int getline(char line[],int maxline);
unsigned long htoi(char s[]);


int main()
{
    int len;
    char line[MAX_LINE];
    
    while(len = getLine(line, MAX_LINE) >0)
        printf("%ul\n", htoi(line));
    

    return 0;
}


int getline(char line[],int maxline){
    int c, i, l;

    for (i = 0, l = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        if (i < maxline - 1)
            line[l++] = c;
    line[l] = '\0';

    return l;

}


unsigned long htoi(char s[])
{
    unsigned long n;
    int i, c;

    n = 0;
    for (i = 0; s[i] != '\0'; ++i) {
        c = s[i];
        if (i == 0 && c == '0' && (s[1] == 'x' || s[1] == 'X')) {
            i = 1;
            continue;
    }
    n *= 16;
    if (c >= '0' && c <= '9')
        n += c - '0';
    else if (c >= 'a' && c <= 'f')
        n += c - 'a';
    else if (c >= 'A' && c <= 'F')
        n += c - 'A';
    }

    return n;
}
