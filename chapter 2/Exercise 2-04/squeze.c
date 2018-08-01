#include <stdio.h>

void squeeze(char a[], char b[]){
    int i, j, k;

    for(i = k = 0; a[i] != '\0'; i++){
        for(j = 0; b[j] != '\0'; j++){
            if( b[j] != a[i]){
                a[k++] = a[i];
            }
        }
    }
    a[k]='\0';
    
}

