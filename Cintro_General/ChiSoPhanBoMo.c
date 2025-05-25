#include <stdio.h>

int main() {
    float eo, hong, whr;
    char gender;

    scanf("%c %f %f", &gender, &eo, &hong);
    if (gender != 'M' && gender != 'W' || eo <= 0 || hong <= 0) {
        printf("4");
    }
    else {
        whr = eo/hong;
        switch (gender) {
            case 'M':
            if (whr <= 0.9) {
                printf("0");
            } else if (whr <= 0.95) {
                printf("1");
            } else if (whr <= 1) {
                printf("2");
            } else {
                printf("3");
            }
            break;
            case 'W': 
            if (whr <= 0.7) {
                printf("0");
            } else if (whr <= 0.8) {
                printf("1");
            } else if (whr <= 0.85) {
                printf("2");
            } else {
                printf("3");
            }
            break;
        }
    }
    return 0;
}