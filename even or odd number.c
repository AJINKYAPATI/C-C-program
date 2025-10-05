#include<stdio.h>
int main()
 {
    int number;
    printf("enter a number");
    scanf("%d", &number);

        if (number % 2 == 0)
        {
            printf("the number is even: %d", number);

        } else {
            printf("the number is odd: %d", number);
        }
        
 }
