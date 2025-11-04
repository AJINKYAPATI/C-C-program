#include <stdio.h>

void printEven(int n) {
    if (n > 100) {
        return; // stop when number becomes greater than 100
    }

    if (n % 2 == 0) {
        printf("%d ", n); // print even number
    }

    printEven(n + 1); // call function again with next number
}

int main() {
    printf("Even numbers from 1 to 100 are:\n");
    printEven(1); // start from 1
    return 0;
}
