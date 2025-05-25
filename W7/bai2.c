#include <stdio.h>

int main() {
    int x=2, y=10;
    for (int j=x; j<=x*y; j+=y/x) {
        printf("j = %d y = %d\n", j, y);
        y+=2;
    }
}