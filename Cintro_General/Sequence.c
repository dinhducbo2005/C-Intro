#include <stdio.h>

int main() {
    int N, sum = 0, x;
    scanf("%d", &N);
    for (int i=1; sum<N; i++) {
        sum+=i;
        x = i;
    }
    printf("%d", x);
}