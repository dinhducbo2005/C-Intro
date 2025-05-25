#include <stdio.h>
#include <string.h>
#define MOD 1000000007

int convertCharToInt(char s) {
    return s - '0';
}

int main() {
    char string[100000];
    scanf("%s", string);
    int length = strlen(string);
    
    if (string[length-1] < '0' || string[length-1] > '9') {
        printf("NOT_CORRECT");
        return 0;
    } else {
        long long result=0;
        int product = 1;
        int number = 0;
        for (int i=length-1; i>=0; i--) {
            if (string[i] >= '0' && string[i] <= '9') {
                number += convertCharToInt(string[i]) * product;
                product *= 10;
            } else if (string[i] == '+'){
                result = (result + number) % MOD;
                number = 0;
                product = 1;
                if (i > 0 && string[i-1] == '+') {
                    printf("NOT_CORRECT");
                    return 0;
                }
            } else {
                printf("NOT_CORRECT");
                return 0;
            }
        }
        result = (result + number) % MOD;
        printf("%lld", result);
    }
    return 0;
}