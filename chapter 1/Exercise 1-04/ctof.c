#include <stdio.h>

/*
1.4 write a program to print the corresponding Celsius to Fahrenheit table.
*/
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("Header of table \n");
    printf("%3s %6s \n", "cels", "fahr");
    
    while(celsius<=upper){
        fahr= (celsius * (9.0/5.0)) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}