#include <stdio.h>

int main() {
    double thue;
    long long thoigian;

    scanf("%lf %lld", &thue, &thoigian);

    if (thue <= 0 || thoigian < 0) {
        printf("-1\n");
    } else {
        long long over = thoigian - 30;
        double phaidong;
        if (thoigian <= 30) {
            phaidong = thue;
        } else if (over <= 90) {
            phaidong = thue + thue * (double)over * 0.0005;
        } else {
            phaidong = thue + thue * (double)over * 0.0007;
        }
        if ((long long)phaidong % 1000 != 0) {
            long long tien = ((long long)phaidong / 1000 + 1) * 1000;
            printf("%lld", tien);
        } else {
            printf("%lld", (long long)phaidong);
        }
    }

    return 0;
}