#include <stdio.h>

/* Exercise 1-14. Write a program to print a histogram of the 
frequencies of different characters in its input.*/

main()
{
    int c, i, j, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;

    for(i =0; i<10; i++)
        ndigit[i] = 0;
    
    while((c = getchar()) != EOF)
        if(c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if(c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    

    printf("histogram of digits");
    for(i=0; i<10; ++i){
        printf("\n digit %d: \t", i);
        for(j=0; j<ndigit[i]; ++j){
            printf("[]");
        }
    }
    printf("\n white space. \t");
    for(i=0; i<nwhite; ++i){
        printf("[]");
    }

    printf("\n other space. \t");
    for(i=0; i<nother; ++i){
        printf("[]");
    }

}