#include <stdio.h>

long long power(int base, int exp) {
    if(exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main() {
    int a, b;

    printf("Problem: Given integers a and b, compute a^b using recursion without using pow() function.\n");
    printf("Input:\n");
    printf("- Two space-separated integers a and b\n");
    printf("Output:\n");
    printf("- Print a raised to power b\n");
    printf("Example:\n");
    printf("Input:\n");
    printf("2 5\n");
    printf("Output:\n");
    printf("32\n");
    printf("Explanation: 2^5 = 2 * 2 * 2 * 2 * 2 = 32\n\n");

    printf("Enter integers a and b: ");
    scanf("%d %d", &a, &b);
    
    printf("%lld\n", power(a, b));
    
    return 0;
}
