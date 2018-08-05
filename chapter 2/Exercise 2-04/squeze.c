#include <stdio.h>
#define MAXLINE 1000

void squeeze(char a[], char b[]);
void getlinee(char line[],int maxline);

int main(){
    char a[MAXLINE];
    char b[MAXLINE]; 

    getlinee(a,MAXLINE);
    getlinee(b,MAXLINE);
    squeeze(a,b);
    printf("%s \n", a);
    return 0;
}

void squeeze(char a[], char b[]){
    int i, j, k,r,bo;
    bo = r = 0;
    for(i = k = 0; a[i] != '\0'; i++){
        for(j = 0; b[j] != '\0'; j++){
            if(a[i] == b[j]){
                printf("%c , %c \n",a[i], b[j]);
                r = 1;
            }
        }
        if(r == 0){
            a[++bo] == a[i];
        }
        r = 0; 
    }
    a[bo]='\0';
    printf("%s \n", a);
}

void getlinee(char line[],int maxline){
    int c, i, l;

    for (i = 0, l = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        if (i < maxline - 1)
            line[l++] = c;
    line[l] = '\0';
}