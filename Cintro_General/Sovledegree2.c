#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if (a==0) {
        if (b==0) {
            printf("NO SOLUTION\n");
        } else printf("%.2f", -c/b);
    } else {
        float delta = b*b-4*a*c;
        if (delta<0) {
            printf("NO SOLUTION\n");
        } else if (delta==0) {
            printf("%.2f", -b/2/a);
        } else {
            printf("%.2f %.2f", ((-b-sqrt(delta))/2), ((-b+sqrt(delta))/2));
        }
    }

    return 0;
}