#include <stdio.h>

int main() {
    int N;
    int sumEven = 0; // Initialize sum for even numbers
    int sumOdd = 0;  // Initialize sum for odd numbers

    // Input value for N
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    // Validate input (N should be positive)
    if (N <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    // Calculate sums
    for (int i = 1; i <= N; ++i) {
        if (i % 2 == 0) {
            sumEven += i; // Add even numbers to sumEven
        } else {
            sumOdd += i;  // Add odd numbers to sumOdd
        }
    }

    // Print results
    printf("Sum of even numbers between 1 and %d: %d\n", N, sumEven);
    printf("Sum of odd numbers between 1 and %d: %d\n", N, sumOdd);

    return 0; // Exit successfully
}
