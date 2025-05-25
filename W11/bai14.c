#include <stdio.h>
void f(int *p, int m) {
    m = m + 5;         //tăng bản sao m lên 5 = 15, không thay đổi giá trị m gốc 
    *p = *p + m;       //Tăng giá trị gốc p = p + m = 5 + 15 = 20
    return;
}

int main() {
    int p = 5, m = 10;  //Khởi tạo biến cục bộ p = 5, m = 10
    f(&p, m);           //Gọi hàm f với địa chỉ của p và giá trị m
    printf("%d", p+m);  //In ra p + m = 20 + 10 = 30
    return 0; 
}