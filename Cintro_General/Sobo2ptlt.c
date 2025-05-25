/*#include <stdio.h>
int main() {
    int n, i, j, a[100001], Q=0;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if ((a[i]+1==a[j]) || (a[j]+1==a[i])) {
                Q++;
            }
        }
    }
    printf("%d", Q);
}*/

#include <stdio.h>
#include <string.h>

#define MAX_VALUE 100000

int main() {
    int n, i, a[100001], Q = 0;
    int count[MAX_VALUE] = {0};
    
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        count[a[i]]++;
    }

    for (i = 0; i < n; i++) {
        if (a[i] + 1 <= MAX_VALUE) {
            Q += count[a[i] + 1];
        }
    }
    printf("%d", Q);
    return 0;
}