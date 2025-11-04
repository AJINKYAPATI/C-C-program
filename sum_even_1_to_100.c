#include <stdio.h>

int sumEven(int n) {
    if (n > 100) {
        return 0; // stop when n becomes greater than 100
    }

    if (n % 2 == 0) {
        return n + sumEven(n + 1); // add even number
    } else {
        return sumEven(n + 1); // skip odd number
    }
}

int main() {
    int sum;
    sum = sumEven(1); // start from 1

    printf("Sum of even numbers from 1 to 100 = %d\n", sum);

    return 0;
}
