#include <stdio.h>
#include <string.h>

#define MAX_N 100000

int main() {
    int T;
    scanf("%d", &T);
    int output[T];

    for (int t = 0; t < T; t++) {
        int n;
        scanf("%d", &n);
        int freq[MAX_N + 2] = {0}; 
        int permutation = 1; 

        for (int i = 0; i < n; i++) {
            int num;
            scanf("%d", &num);

            if (num < 1 || num > n) {
                permutation = 0;
            } else {
                freq[num]++;
                if (freq[num] > 1) {
                    permutation = 0;
                }
            }
        }

        output[t] = permutation;
    }

    for (int t = 0; t < T; t++) {
        printf("%d\n", output[t]);
    }

    return 0;
}