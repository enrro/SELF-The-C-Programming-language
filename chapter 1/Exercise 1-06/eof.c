#include <stdio.h>

/*
verify that the expresion getchar()!=EOF is 0 or 1.
*/
main()
{
   printf("Please enter a character \n");
   printf("The expression \"getchar() != EOF\n is %d. \n", getchar()!=EOF);
   return 0;
}