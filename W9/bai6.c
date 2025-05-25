#include <stdio.h>
int i;
void f() {
    int i = 0;
    i++;
}
void g() {
    i++;
}
int main() {
    i = 10;
    f();
    printf("i = %d", i);
    g();
    printf("\ni = %d", i);
}
