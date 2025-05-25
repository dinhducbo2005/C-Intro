#include <stdio.h>
int* findLarger(int *n1, int *n2, int *n3) {
    int *result = n1;
    if(*n2 > *result) result = n2;
    if(*n3 > *result) result = n3;
    return result;
}

int main() {
    int a, b, c;
    int *result;
    scanf("%d%d%d", &a, &b, &c);
    result = findLarger(&a, &b, &c);
    printf("%d", *result);
    return 0;
}