#include <stdio.h>

void f(int *p, int *q) {
    p = q;          // Gán p trỏ đến cùng nơi với q (p giờ trỏ đến j)
    *p = 2;         // Gán giá trị tại nơi p trỏ tới là 2 (j = 2)
}

int i = 0, j = 1;    // Khai báo biến toàn cục i = 0, j = 1

int main() {
    f(&i, &j);       // Gọi f với địa chỉ của i và j
    printf("%d %d\n", i, j); // In giá trị của i và j sau khi gọi f
    return 0;
}
