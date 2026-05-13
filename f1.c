#include <stdio.h>

int main(void)
{
    int a, b, sum;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    sum = a + b;
    printf("Sum: %d\n", sum);

    return 0;
}  Added new feature line
