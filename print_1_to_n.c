#include <stdio.h>

// Function declaration
void printNumbers(int n);

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d are:\n", n);
    printNumbers(n);

    return 0;
}

// Recursive function definition
void printNumbers(int n) {
    if (n == 0)
        return; // Base condition

    // Recursive call for smaller problem
    printNumbers(n - 1);

    // Print after recursive call
    printf("%d ", n);
}
