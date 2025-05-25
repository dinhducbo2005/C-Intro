#include <stdio.h>
int main() {
    int n, s[10001], p0=0, p1=0, p2=0, p3=0, p4=0, p5=0, p6=0, p7=0, p8=0, p9=0, p10=0;

    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &s[i]);
        if (s[i]==0) p0++;
        if (s[i]==1) p1++;
        if (s[i]==2) p2++;
        if (s[i]==3) p3++;
        if (s[i]==4) p4++;
        if (s[i]==5) p5++;
        if (s[i]==6) p6++;
        if (s[i]==7) p7++;
        if (s[i]==8) p8++;
        if (s[i]==9) p9++;
        if (s[i]==10) p10++;
    }
    printf("%d %d %d %d %d %d %d %d %d %d %d", p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);

}