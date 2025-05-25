#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    else {
        for (int i = 2; i*i<=n; i++) {
            if (n%i == 0) return 0;
        }
        return 1;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int check = is_prime(n);
    if (check == 0) printf("NO");
    else if (check == 1) printf("YES");
    return 0;
}