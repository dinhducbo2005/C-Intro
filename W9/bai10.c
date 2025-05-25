#include <stdio.h>
#define A 150000
long salary(int hours) {
    if (hours<10 || hours>65) return -1;
    else {
        if (hours<=40) {
            return hours * A;
        } else return 40 * A + (hours-40)*A*3/2; 
    }
}
int main() {
    int hours;
    scanf("%d", &hours);
    printf("%ld", salary(hours));
    return 0;
}