#include <stdio.h>

int main() {
    int numbers[5];
    int i, max, secondMax;

    // Collect 5 numbers
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    // Find greatest number
    max = numbers[0];
    for (i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("The greatest number is: %d\n", max);

    // Find second greatest number
    secondMax = numbers[0];
    for (i = 1; i < 5; i++) {
        if (numbers[i] > secondMax && numbers[i] != max) {
            secondMax = numbers[i];
        }
    }
    printf("The second greatest number is: %d\n", secondMax);

    return 0;
}
