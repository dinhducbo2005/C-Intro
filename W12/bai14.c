#include <stdio.h>

void f(char **p) {
    char **t;
    char *str;

    //t = p + sizeof(int)/sizeof(char*);
    t = p + 1;

    str = *t;

    printf("%s\n", str);
}

int main() {
    char *argv[] = {"ab", "cd", "ef", "gh", "ij", "kl"};
    f(argv);
    return 0;
}
