#include <stdio.h>

int main() {
    int base_fine; // tổng số tiền phạt theo quyết định
    int days_late; // số ngày trễ
    double actual_fine;

    scanf("%d %d", &base_fine, &days_late);

    if (base_fine <= 0 || days_late <= 0 || base_fine > 200000000) {
        printf("-1");
        return 0;
    }
    actual_fine = base_fine;
    if (days_late > 10) {
        int overdue_days = days_late - 10;
        actual_fine += (base_fine * overdue_days * 0.0005);
    }
    if ((int)actual_fine % 1000 == 0) {
        printf("%d", (int)actual_fine);
    } else {
        int fine = ((int)actual_fine/1000+1)*1000;
        printf("%d", fine);
    }
    return 0;
}
