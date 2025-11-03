#include <stdio.h>
#include <math.h>

void factor(int n) {
    printf("Factors of %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }
    printf("\n");
}

void factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    printf("Factorial of %d is: %d\n", n, fact);
}

void prime(int n) {
    int flag = 0;
    if (n <= 1) {
        printf("%d is not a prime number\n", n);
        return;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);
}

void reverse(int n) {
    int rev = 0, rem;
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("Reversed number is: %d\n", rev);
}

void power(int base, int pow) {
    int result = 1;
    for (int i = 1; i <= pow; i++) {
        result *= base;
    }
    printf("%d to the power %d is: %d\n", base, pow, result);
}

int main() {
    int ch, num, base, pow;

    do {
        printf("\n1. Factors\n2. Factorial\n3. Prime\n4. Reverse\n5. Power\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter number: ");
                scanf("%d", &num);
                factor(num);
                break;

            case 2:
                printf("Enter number: ");
                scanf("%d", &num);
                factorial(num);
                break;

            case 3:
                printf("Enter number: ");
                scanf("%d", &num);
                prime(num);
                break;

            case 4:
                printf("Enter number: ");
                scanf("%d", &num);
                reverse(num);
                break;

            case 5:
                printf("Enter base and power: ");
                scanf("%d %d", &base, &pow);
                power(base, pow);
                break;

            default:
                printf("Invalid choice!\n");
        }

        printf("\nDo you want to continue? Press 1 for Yes: ");
        scanf("%d", &ch);

    } while (ch == 1);

    printf("\nThank you!\n");
    return 0;
}
