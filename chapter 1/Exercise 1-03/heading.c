#include <stdio.h>

/*
1.3 modify the temperature conversion program to print a heading above the table.
*/

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Header of table \n");
    printf("%3s %6s \n", "fahr", "celsius");
    
    while(fahr<=upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}