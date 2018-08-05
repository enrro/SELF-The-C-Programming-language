#include <stdio.h>
/*
Author. Enro
1.9 write a program to copy its input to its output to its replacing each string
of one or more blanks by a single blank
*/

main()
{
    int s1;

    s1 = 0;

    while((c=getchar()) != EOF)
        if(c== ' '){
            if(s1==0){
                s1=1;
                putchar(c);
            }
        }
        else{
            s1=0;
            putchar(c);
        }

}