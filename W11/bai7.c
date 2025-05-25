#include <stdio.h>

void incomeplus(long *current, int year) {
    if (year > 3) {
        *current+=3000000;
    }
}

int main() {
    long current;
    int year;
    printf("Nhap luong hien tai: ");
    scanf("%ld", &current);
    printf("Nhap so nam lam viec: ");
    scanf("%d", &year);
    incomeplus(&current, year);
    printf("Luong moi: %ld", current);
    return 0;
}