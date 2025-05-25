#include <stdio.h>
#include <string.h>

int thuongTet(int month) {
    int money;
    if (month <= 6) {
        money = 1000000;
    } else if (month <= 12) {
        money = 2000000;
    } else if (month <= 60) {
        money = 5000000;
    } else {
        int over_month = (month-60) / 12;
        money = 5000000 + over_month*1000000;
    }
    return money;
}

int max_ThuongTet (int month[], int n) {
    int max = 0;
    for (int i=0; i<n; i++) {
        if (thuongTet(month[i]) > max) {
            max = thuongTet(month[i]);
        }
    }
    return max;
}
int main() {
    int n, func;
    int month[1000];
    char id[1000][7];   
    char name[1000][51]; 

    scanf("%d", &n);
    getchar();

    if (n <= 0 || n > 1000) {
        printf("-1\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%s %d", id[i], &month[i]);
        getchar();
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strcspn(name[i], "\r\n")] = '\0';
    }

    scanf("%d", &func);

    if (func == 1) {
        for (int i = 0; i < n; i++) {
            printf("%s %d\n", name[i], thuongTet(month[i]));
        }
    } else if (func == 2) {
        int max = 0;
        for (int i = 0; i < n; i++) {
            int t = thuongTet(month[i]);
            if (t > max) max = t;
        }
        printf("%d\n", max);
        for (int i = 0; i < n; i++) {
            if (thuongTet(month[i]) == max) {
                printf("%s %s\n", id[i], name[i]);
            }
        }
    } else {
        printf("-1\n");
    }

    return 0;
}