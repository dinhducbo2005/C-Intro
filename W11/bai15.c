#include <stdio.h>
int *findLarger(int *n1, int *n2) {
    if (*n1 > *n2) {
        return n1;
    }
    else return n2;
}

int main() {
    int numa = 0;
    int numb = 0;
    int *result;
    printf("\n\nPointer: Show a function returning pointer\n");
    printf("------------------------------------------\n");
    printf("Input the first number: ");
    scanf("%d", &numa);
    printf("Input the second number: ");
    scanf("%d", &numb);
    result = findLarger(&numa, &numb);
    printf("The number %d is larger.\n\n", *result);
    return 0;
}