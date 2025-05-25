#include <stdio.h>
int compare_array(const int arr1[], const int arr2[], int size) {
    int check;
    for (int i=0; i<size; i++) {
        if (arr1[i] == arr2[i]) {
            check = 1;
        } else {
            check = 0;
            break;
        }
    }
    return check;
}

int main() {
    int n, a1[10], a2[10];
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &a1[i]);
    }
    for(int i=0; i<n; i++) {
        scanf("%d", &a2[i]);
    }
    if (compare_array(a1, a2, n)==1) {
        printf("YES");
    } else printf("NO");
    return 0;
}