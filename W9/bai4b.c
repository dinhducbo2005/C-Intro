#include <stdio.h>
int i = 1;

int addOne() {
    i += 1;
    return i;
}

int main() {
    printf("%d\n", addOne(i));
    printf("%d\n", i);
    return 0;
}

