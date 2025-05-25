#include <stdio.h>

void OddSort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            for (int j = i + 1; j < n; j++) {
                if (a[j] % 2 != 0 && a[j] > a[i]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
}

int main() {
    int n, a[10];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    OddSort(a, n);
    for (int i = 0; i < n; i++) {
        printf("%5d", a[i]);
    }
    return 0;
}
