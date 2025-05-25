#include <stdio.h>
#include <limits.h>
int main() {
    int n, a[20], sumle=0, minchan=INT_MAX;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if (a[i]%2!=0) {
            sumle+=a[i];
        } else {
            if (a[i]<minchan) {
                minchan = a[i];
            }
        }
    }
    printf("%d\n", sumle);
    if (minchan==INT_MAX) {
        printf("KHONG CO SO CHAN TRONG MANG");
    } else printf("%d", minchan);
    return 0;
}