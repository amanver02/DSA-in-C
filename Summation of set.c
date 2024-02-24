#include <stdio.h>
int main() {
    int n, i;
    float num, sum = 0;

    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%f", &num);

        sum += num; }

    printf("Sum of the set of numbers = %.2f\n", sum);

    return 0;}