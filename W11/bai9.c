#include <stdio.h>
int main() {
    int *ptr;   //Khai báo con trỏ ptr
    int x;      //Khai báo biến x

    ptr = &x;   //Con trỏ ptr trỏ đến địa chỉ của x
    *ptr = 0;   //Gán giá trị 0 cho vùng nhớ ptr trỏ tới (tức là x = 0)
    printf("x = %d\n", x);          //In giá trị x = 0
    printf("*ptr = %d\n", *ptr);    //In giá trị *ptr = 0 
    *ptr += 5;  //Tăng giá trị vùng nhớ ptr trỏ tới lên 5 (x = 5)
    printf("x = %d\n", x);          //In giá trị x = 5
    printf("*ptr = %d\n", *ptr);    //In giá trị *ptr = 5
    (*ptr)++;   //Tăng giá trị vùng nhớ ptr trỏ tới lên 1 (x = 6)
    printf("x = %d\n", x);          //In giá trị x = 6
    printf("*ptr = %d\n", *ptr);    //In giá trị *ptr = 6
    return 0;
}