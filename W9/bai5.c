#include <stdio.h>
void swap(int a, int b) {
    int tmp;
    tmp = a; 
    a = b; 
    b = tmp;
    printf("Calling environment: %d %d\n", a, b);
}
int main() {
    int a = 3, b = 5;
    printf("Calling environment: %d %d\n", a, b);
    swap(a, b);
    printf("Calling environment: %d %d\n", a, b);
    return 0; 
}

