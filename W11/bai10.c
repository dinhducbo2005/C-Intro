#include<stdio.h> 
int main() 
{ 
   int a;            //Khởi tạo biến a kiểu int
   char *x;          //Khởi tạo con trỏ *x kiểu char
   x = (char *) &a;  //Ép kiểu con trỏ &a (int*) thành char*
   a = 512;          //Gán a = 512 (00000000 00000000 00000010 00000000)
   x[0] = 1;         //Thay đổi byte thứ 0 của a thành 1 (00000001)
   x[1] = 2;         //Thay đổi byte thứ 1 của a thành 2 (00000010)
   //--> a = 00000000 00000000 00000010 0000001 = 513
   printf("%d\n", a);//In a = 513
   return 0; 
}
