#include <stdio.h>
void sort(int a[], int n) {
    int tmp;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i]>a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main() {
    int n, a[100], chan[100], le[100];
    int demchan=0, demle=0;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n; i++) {
        if (a[i]%2==0) {
            chan[demchan++] = a[i];
        } else le[demle++] = a[i];
    }

    sort(chan, demchan);
    sort(le, demle);

    for (int i=0; i<demchan; i++) {
        printf("%d ", chan[i]);
    }
    printf("\n");
    for (int i=0; i<demle; i++) {
        printf("%d ", le[i]);
    }
    return 0;
}