#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int MaxPrime (int n) {
    int i, maxprime;
    if (i==2) return 2;
    if (i%2==0) return 0;
    for (i=3; i<=sqrt(n); i++) {
        if (n%i!=0) {
            maxprime=i;
        }
    }
    return maxprime;
}

int main() {
    int n, prime, exponent, check=0;
    scanf("%d", &n);
    prime = MaxPrime(n);
    while (1) {
        exponent = 0;
        while (1) {
            if (n%prime==0) {
                n/=prime;
                exponent++;
            } else break;
        }
        if (exponent!=0) {
            printf("%d %d", prime, exponent);
        }
        prime--;
    }
}