#include <stdio.h>
int main() {
    int grade[1000];
    int i = 0;
    int a, b, c, d, e, f;
    
    while (scanf("%d ", &grade[i]) == 1) {
        i++;
        if (getchar() == '\n') {
            break;
        }
    }

    scanf("%d %d ", &a, &b);
    scanf("%d %d ", &c, &d);
    scanf("%d %d", &e, &f);

    int excellent = 0, very_good = 0, good = 0;
    for (int j=0; j<i; j++) {
        if (grade[j] >= a && grade[j] <= b) {
            excellent++;
        } else if (grade[j] >= c && grade[j] <= d) {
            very_good++;
        } else if (grade[j] >= e && grade[j] <= f) {
            good++;
        }
    }
    printf("excellent %d\nvery good %d\ngood %d", excellent, very_good, good);
    return 0;
}