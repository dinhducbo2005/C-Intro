#include <stdio.h>
int main() {
    int product = 2;
    while (product <= 100) {
        product = 2*product;
    }
    printf("product: %d", product);
    return 0;
}