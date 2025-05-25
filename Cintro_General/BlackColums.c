#include <stdio.h>
#include <string.h>
int main() {
    int n;
    int m[1001][1001];
    int count=0;

    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    for (int j=1; j<=n; j++) {
        int sum=0;
        for (int i=1; i<=n; i++) {
            sum+=m[i][j];
        }
        if(sum==n) {
            count++;
        }
    }

    printf("%d", count);
}