#include <stdio.h>

void printnchars(char ch, int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
}

int main() {
    char c;
    int n;
    scanf("%c %d", &c, &n);
    printf("Tam giac: \n");
    printnchars(c, n);
    return 0;
}