#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int d;
    for (int i=-c; i<=c; i++) {
        if (i*i*i + a*i*i + b*i + c == 0) {
            printf("%d ", i);
            c/=i;
        }
    } 
}