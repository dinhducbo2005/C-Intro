#include <stdio.h>

int main() {
    char c;
    int count;
    for (count=0; ; count++){
        c=getchar();
        if (c=='.') break;
    }
    printf("Number of character is %d\n", count);
}