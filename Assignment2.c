//A number is said to be valid if it is divisible by 8. Write a program that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers. Use a while loop to complete the task
#include <stdio.h>
int main() 
{
    int num, count = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    while (num != 0) {
        if (num % 8 == 0) {
            count++;
            printf("Valid number! Enter another number : ");
            scanf("%d", &num);
        } else {
            printf("Invalid number! Enter another number : ");
            scanf("%d", &num);
        }
    }

    printf("You entered %d valid numbers.\n", count);

  return 0;
}
