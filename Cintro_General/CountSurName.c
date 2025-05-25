#include <stdio.h>
#include <string.h>

int check_ValidName(char fullName[]) {
    for (int i=0; i<strlen(fullName); i++) {
        if ((fullName[i] < 'A' || (fullName[i] > 'Z' && fullName[i] < 'a') || fullName[i] > 'z') && fullName[i] != ' ') {
            return 0;
        }
    }
    return 1;
}

void seperate_SurName(char fullName[], char *surName) {
    int i = 0;
    while (fullName[i] != ' ') {
        surName[i] = fullName[i];
        i++;
    }
}

int main() {
    int n;
    int uniqueCount = 0;
    int count[10000] = {0};
    static char fullName[10000][50], surName[100000][50];
    static char uniqueSurName[1000][50];

    scanf("%d", &n);
    getchar();
    for (int i=0; i<n; i++) {
        fgets(fullName[i], sizeof(fullName[i]), stdin);
        fullName[i][strcspn(fullName[i], "\r\n")] = '\0';
    }

    for (int i=0; i<n; i++) {
        if (!check_ValidName(fullName[i])) {
            printf("INVALID INPUT");
            return 0;
        }

        seperate_SurName(fullName[i], surName[i]);

        int found = 0;
        
        for (int j=0; j<uniqueCount; j++) {
            if (strcmp(surName[i], uniqueSurName[j]) == 0) {
                count[j]++;
                found = 1;
                break;
            } 
        }

        if (!found) {
            strcpy(uniqueSurName[uniqueCount], surName[i]);
            count[uniqueCount] = 1;
            uniqueCount++;
        }
    }

    for (int i=0; i<uniqueCount; i++) {
        printf("%s %d\n", uniqueSurName[i], count[i]);
    }

    return 0;
}