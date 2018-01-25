#include <stdio.h>

/*Exercise 1-13. Write a program to print a histogram of the lengths of words in
its input. It is easy to draw the histogram with the bars
 horizontal; a vertical orientation is more challenging. */

#define IN          1
#define OUT         0
#define MAX_LENGTH 15
/* count lines, words, and characters in input */

main()
{

    int c, nl, nw, nc, state, length, i, j;
    int wordFreq[MAX_LENGTH];

    for(i=0; i<MAX_LENGTH; ++i){
        wordFreq[i] = 0;
    }

    state = OUT;
    nl = nw = nc = length = 0;
    while((c = getchar()) != EOF){
        ++nc;
        if(c == '\n'){
            ++nl;
        }
        if(c == ' ' || c == '\n' || c == '\t'){
            if(state == IN){
                //we increment the counter of the word.
                ++wordFreq[length];
                //the word finishes once that the state of the word if false.
                length = 0;
            }
            state = OUT;
        }
        else if(state == OUT){
            
            state = IN;
            ++nw;
        }
        if(state == IN){
            ++length;
        }

    }

    printf("histogram of length of words.");
    for(i=0; i<MAX_LENGTH; ++i){
        printf("\n length %d: \t", i);
        for(j=0; j<wordFreq[i]; ++j){
            printf("[]");
        }
    }

    printf("\n lines: %d words: %d other: %d\n", nl, nw, nc);

    return 0;
}