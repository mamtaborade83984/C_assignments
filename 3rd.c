#include <stdio.h>

void fibonacci(int n) {
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series up to %d numbers: \n", n);
    printf("%d, %d, ", first, second);

    for (i = 2; i < n; i++) {
        next = first + second;
        printf("%d, ", next);
        first = second;
        second = next;
    }
}

int main() {
    int n;

    printf("Enter the number of Fibonacci numbers : ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
