#include <stdio.h>

int f(int x, int *py, int **ppz) 
{ 
  int y, z; 
  **ppz += 1;           //**ppz là giá trị của c, giá trị c tăng lên 1
   z  = **ppz;          //z = **ppz = c + 1
  *py += 2;             //*py trỏ đến giá trị b, tăng giá trị py trỏ tới lên 2, 
   y = *py;             //y = *py = b + 2
   x += 3;              //Tăng giá trị bản sao của c lên 3, giá trị gốc của c không đổi
   return x + y + z;    //7 + 7 + 5
}    

int main() 
{ 
   int c, *b, **a;      //Khởi tạo biến c, con trỏ b, con trỏ của con trỏ a
   c = 4;               
   b = &c;              //b trỏ tới c
   a = &b;              //a trỏ tới b
   printf("%d ", f(c, b, a)); 
   return 0;
}