#include <stdio.h>
int gptb1(float a, float b, float *x) {
    int result = -1;
    if (a == 0) {
        if (b==0) {
            result = 1;
        } else {
            result = 2;
        }
    } else {
        *x = -b/a;
        result = 0;
    }
    return result; 
}

int main() {
    float a, b, x;
    int result;
    printf("Nhap 2 so a va b (a.x + b = 0): ");
    scanf("%f\n%f", &a, &b);
    result = gptb1(a, b, &x);
    printf("Ket qua cua phuong trinh la: ");
    if(result == 0) printf("%.2f", x);
    if(result == 1) printf("VO SO NGHIEM");
    if(result == 2) printf("VO NGHIEM");
    return 0; 
}
