#include <stdio.h>

void fun(int *ptr) {
    //Gán giá trị 30 cho vùng nhớ con trỏ ptr trỏ tới
    *ptr = 30;  
}
int main() {
    //Gán giá trị của biến cục bộ y = 20
    int y = 20; 
    //Gọi hàm fun với địa chỉ biến y, thay đổi giá trị y=30
    fun(&y);   
    //In giá trị y = 30 
    printf("%d", y);    

    return 0;
}
