#include <stdio.h>

/*
1.8 W Write a program to count blanks, tabs, and newlines
*/

main()
{
    int c, n1, t1, s1;

    s1 = 0;
    t1 = 0;
    n1 = 0;

    while((c=getchar()) != EOF)
        if(c== ' ')
            ++s1;
        else if(c== '\t')
            ++t1;
        else if(c== '\n')
            ++n1;
    printf("There are %d white spaces.\n", s1);
    printf("There are %d tabs.\n", t1);
    printf("There are %d new lines.\n", n1);
}