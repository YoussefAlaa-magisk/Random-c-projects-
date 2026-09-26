#include <stdio.h>

void id() {
    printf("=== Random C Calculator ===\n");

    int a = 25;
    int b = 7;

    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    printf("Addition:       %d + %d = %d\n", a, b, a + b);
    printf("Subtraction:    %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division:       %d / %d = %d\n", a, b, a / b);
    printf("Remainder:      %d %% %d = %d\n", a, b, a % b);
}

int main() {
    id();

    return 0;
}
