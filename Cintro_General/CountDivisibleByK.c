#include <stdio.h>
#include <string.h>
int main() {
    int a[100001], k, n=0;

    while (1) {
        scanf(" %d", &a[n]); 
        char c = getchar();
        if (c == '\n') break;
        n++;
    }
    scanf("%d", &k);
    int count=0;
    for (int i=0; i<=n; i++) {
        if (a[i]%k==0) count++;
    }

    printf("%d", count);
}