#include <stdio.h>
int main() {
    char *ptr = "ABCDE";
    char *ch;
    ch = &*ptr + 3;

    printf("%c", *ch);
}