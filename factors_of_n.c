#include <stdio.h>

void printFactors(int n, int i) {
    if (i > n) {
        return; // stop when i becomes greater than n
    }

    if (n % i == 0) {
        printf("%d ", i); // print if i is a factor
    }

    printFactors(n, i + 1); // call the function again
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);
    printFactors(n, 1);

    return 0;
}
