#include <stdio.h>

int main() {
    int n;
    printf("So hang la: ");
    scanf("%d", &n); 
    printf("Thap Fibonacci: \n");
    for (int i = 0; i < n; i++) {
        int ht = 1; 
        printf("%4d", ht); 

        for (int j = 1; j <= i; j++) {
            ht = ht * (i - j + 1) / j; 
            printf("%4d", ht); 
        }
        printf("\n");
    }

    return 0;
}