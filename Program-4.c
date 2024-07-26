#include <stdio.h>
int mul(int x, int y) {
    return x * y;
}
int main() {
    int a = 5, b = 10, c;
    c = mul(a, b);
    printf("Result of multiplication: %d\n", c);
    return 0;
}
