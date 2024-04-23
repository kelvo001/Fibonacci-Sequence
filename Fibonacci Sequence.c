#include <stdio.h>

int main() {
    int n = 100; 
    long long int fib1 = 0, fib2 = 1, nextTerm;

    printf("Fibonacci Sequence up to %d:\n", n);
    printf("%lld, %lld, ", fib1, fib2);

    for (int i = 2; i < n; i++) {
        nextTerm = fib1 + fib2;
        if (nextTerm > 100) 
            break;
        printf("%lld", nextTerm);
        if (i < n - 1)
            printf(", ");
        fib1 = fib2;
        fib2 = nextTerm;
    }

    printf("\n");
    return 0;
}
