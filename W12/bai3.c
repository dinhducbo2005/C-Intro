#include <stdio.h>
int main() {
    int i, x[3], sum = 0;
    printf("Enter 3 numbers: ");
    for(i = 0; i < 3; ++i) {
        // Equivalent to scanf("%d", &x[i]);
        scanf("%d", x+i);
        // Equivalent to sum += x[i]
        sum += *(x+i);
    }
    printf("Sum = %d", sum);
    return 0;
}