#include <stdio.h>

int main() {
    int n, a[10], tmp;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            if (a[i]>a[j]) {
                tmp = a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for (int i=0; i<n; i++) {
        int count=1;
        int dadem=0;
        for (int j=0; j<i; j++) {
            if (a[j]==a[i]) {
                dadem=1;
                break;
            }
        }
        if (dadem==0) {
            for (int j=i+1; j<n; j++) {
                if (a[j]==a[i]) {
                    count++;
                }
            }
            printf("%d %d\n", a[i], count);
        }
    }
    return 0;
}