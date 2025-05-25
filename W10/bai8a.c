#include <stdio.h>
void DesSort(int a[], int n) {
    int tmp;
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            if(a[i]<a[j]) {
                tmp = a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
}

int main() {
    int n, a[10];
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    DesSort(a, n);
    for (int i=0; i<n; i++) {
        printf("%5d", a[i]);
    }
    return 0;
}