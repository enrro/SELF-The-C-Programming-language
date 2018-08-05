#include <stdio.h>

/*
    Exercise 1-15. Rewrite the temperature conversion program 
    of Section 1.2 to use a function for conversion.
*/
#define UPPER 300
#define LOWER 0
#define STEP 20

float conversion(float fahr);

main()
{
    float fahr, celsius;

    fahr = LOWER;
    while(fahr <= UPPER){
        celsius = conversion(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr =  fahr + STEP;
    }
    
}

float conversion(float fahr)
{
    return (5.0/9.0) * (fahr-32.0);
}
/*
    printf notes
    %d      print as decimal integer
    %6d     print as decimal integer, at least 6 characters wide
    %f      print as floating point
    %6f     print as floating point, at least 6 characters wide
    %.2f    print as floating point, 2 characters after decimal point
    %6.2f   print as floating point, at least 6 wide and 2 after decimal point
*/