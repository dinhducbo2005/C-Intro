#include <stdio.h>
#define lapdat 70000000
int main() {
    float n;
    scanf("%f", &n);
    float moneyperyear = n*5*5*1.939*1000;
    printf("%d", (int)(lapdat/moneyperyear));
}