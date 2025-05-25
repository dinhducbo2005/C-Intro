#include <stdio.h>

int is_LeapYear(int year) {
    if (year%4==0) {
        if (year%100!=0) return 1;
        else {
            if (year%400==0) return 1;
            else return 0;
        }
    } else return 0;
}

int main() {
    int year;
    scanf("%d", &year);
    if (is_LeapYear(year)) {
        printf("YES");
    } else printf("NO");
    return 0;
}