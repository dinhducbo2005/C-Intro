#include <stdio.h>
#include <string.h>

int main() {
    int hh_in, hh_out, mm_in, mm_out;

    scanf("%d:%d %d:%d", &hh_in, &mm_in, &hh_out, &mm_out);

    if (hh_in > hh_out) {
        printf("-1");
    } else if (hh_in == hh_out) {
        if (mm_in > mm_out) {
            printf("-1");
        } else if (mm_in == mm_out) {
            printf("0");
        }
    } else {
        if (hh_out < 18) {
            printf("5000");
        } else {
            printf("8000");
        }
    }
    return 0;
}