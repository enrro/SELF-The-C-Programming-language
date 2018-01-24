#include <stdio.h>

/*Exercise 1-12. Write a program that prints its input one word per line*/

#define IN  1
#define OUT 0

/* count lines, words, and characters in input */

main()
{

    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while((c = getchar()) != EOF){
        ++nc;
        if(c == '\n'){
            ++nl;
        }
        if(c == ' ' || c == '\n' || c == '\t'){
            if(state==IN){
                printf("\n");            
            }
            state = OUT;
        }
        else if(state == OUT){
            state = IN;
            ++nw;
            printf("%c", c);            
        }
        else{
            printf("%c", c);            
        }
    }

    printf("%d %d %d\n", nl, nw, nc);

    return 0;
}