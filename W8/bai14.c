#include <stdio.h>

int main() {
    int N, f1=1, f2=1, f3=0;
    scanf("%d", &N);
    do {
        f3 = f1+f2;
        f1 = f2;
        f2 = f3; 
    } while(f3<N);
    printf("%d", f1);
}