#include <stdio.h>
int main() {
    int n, s[1000], negative[1000], count=0, des[1000];
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &s[i]); 
    }

    for (int i=0; i<n; i++) {
        if (s[i]<0) {
            negative[count] = s[i];
            des[count] = i;
            count++;
        }
    }

    int tmp;
    for (int i=0; i<count; i++) {
        for (int j=i+1; j<count; j++) {
            if (negative[i]<negative[j]) {
                tmp = negative[i];
                negative[i] = negative[j];
                negative[j] = tmp;
            }
        }
    }

    for (int i=0; i<count; i++) {
        s[des[i]] = negative[i];
    }

    for (int i=0; i<n; i++) {
        printf("%d ", s[i]);
    }
}