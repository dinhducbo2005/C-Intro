#include <stdio.h>
int main() {
    int N, new=0, digit;
    scanf("%d", &N);
    int tmp=N;

    while (tmp>0) {
        digit = tmp%10;
        new = new*10+digit;
        tmp=tmp/10;
    }
    if (new == N) {
        printf("YES");
    } else printf("NO");
}