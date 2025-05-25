#include <stdio.h>
#define print(x) printf("%d ", x)
int x;              //Khởi tạo biến toàn cục x
int Q(int z) {
    z += x;         //z = z + x
    //print(z);
    return z;       //Trả về giá trị z
}

void P(int *y) {
    int x = *y + 2; //Khai báo biến cục bộ x = giá trị y + 2 = 5 + 2 = 7
    x += Q(x);      //Gọi Q(x) = 7 + 5 = 12, sau đó x = x + Q(x) = 7 + 12 = 19
    *y = x - 1;     //Gán lại giá trị tại địa chỉ y = 19 - 1 = 18 (x toàn cục = 18)
    //print(x);
}

int main() {
    x = 5;          //Khởi tạo x toàn cục = 5
    P(&x);          //Gọi P với địa chỉ x toàn cục
    print(x);       //In x toàn cục = 18
    return 0; 
}
