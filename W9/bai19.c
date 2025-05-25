#include <stdio.h>

void Pyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch++);
        }
        ch -= 2;
        for (; ch >= 'A'; ch--) {
            printf("%c ", ch);
        }

        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d", &n);
    Pyramid(n);
    return 0;
}