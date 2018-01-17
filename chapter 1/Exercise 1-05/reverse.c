#include <stdio.h>

/*
1.5 Modify the temperature conversion program to print the table in
    reverse order, that is, from 300 degrees to O
*/

main()
{

    #define lOWER 0
    #define UPPER 300
    #define STEP 20

    int celsius;
    
    printf("Header of table \n");
    printf("%3s %6s \n", "cels", "fahr");
    
    for(celsius = UPPER; celsius>=lOWER;celsius=celsius-STEP){
        printf("%3d %6.1f\n", celsius, celsius * (9.0/5.0)+ 32.0);
    }
}