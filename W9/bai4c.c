#include <stdio.h>
int i = 1;

int addOne () {
    i = i + 1;
    return i;
}

int main() {
    int i = 3;
    printf("%d\n", addOne());
    printf("%d\n", i);
    return 0;
}