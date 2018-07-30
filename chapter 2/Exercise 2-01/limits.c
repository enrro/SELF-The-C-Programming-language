#include <stdio.h>
#include <limits.h>


int main(){

    printf("Signed values \nint: %ld \nshort: %ld \nlong: %ld \nchar: %ld \n", sizeof(signed int), sizeof(signed short), sizeof(signed long), sizeof(signed char));
    printf("Unsigned values \nint: %lu \nshort: %lu \nlong: %lu \nchar: %lu \n", sizeof(unsigned int), sizeof(unsigned short), sizeof(unsigned long), sizeof(unsigned char));
    
    printf("Range of signed char is [%d, %d].\n", SCHAR_MIN, SCHAR_MAX);
    printf("Range of unsigned char is [%u, %u].\n", 0, UCHAR_MAX);
    printf("Range of char is [%d, %d].\n", CHAR_MIN, CHAR_MAX);
    
    printf("Range of signed short int is [%hd, %hd].\n", SHRT_MIN, SHRT_MAX);
    printf("Range of unsigned short int is [%hu, %hu].\n", 0, USHRT_MAX);

    printf("Range of signed int is [%d, %d].\n", INT_MIN, INT_MAX);
    printf("Range of unsigned int is [%u, %u].\n", 0, UINT_MAX);

    printf("Range of signed long int is [%ld, %ld].\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long int is [%lu, %lu].\n", 0, ULONG_MAX);
    return 0;
}