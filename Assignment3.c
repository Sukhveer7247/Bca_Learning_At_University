//Can you help your digital design faculty in correcting the assignment on number conversions by writing a program to convert a decimal number to its binary equivalent using a while loop.
//Example, lets say input is 7, output should be 111
#include<stdio.h>
int main()
{
    int decimal, binary = 0, base = 1, rem;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        rem = decimal % 2;
        binary = binary + rem * base;
        decimal = decimal / 2;
        base = base * 10;
    }

    printf("The binary equivalent is: %d\n", binary);

  return 0;
}
