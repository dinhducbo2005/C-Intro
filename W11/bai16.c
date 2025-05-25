#include <stdio.h>

void printAlphabet() {
    char *a, c = 'A';
    for (a = &c; *a <= 'Z'; (*a)++) {
        printf("%c ", *a);
    }
}

int main() {
    printAlphabet();
    return 0;
}