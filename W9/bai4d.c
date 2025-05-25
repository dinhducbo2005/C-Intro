#include <stdio.h>
int i = 1;

int addOne(int i) {
    i = i + 1;
    return i;
}

int main() {
    int i = 3;
    printf("%d\n", addOne(i));
    printf("%d", i);
}

