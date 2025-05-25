#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_STUDENT 100
#define MAX_LENGTH 51

int main() {
    int n;
    char name[MAX_STUDENT][MAX_LENGTH];

    scanf("%d", &n);
    getchar();

    for (int i=0; i<n; i++) {
        fgets(name[i], MAX_LENGTH, stdin);
        name[i][strcspn(name[i], "\n")] = '\0';
    }
    for (int i=0; i<n; i++) {
        name[i][0]=toupper(name[i][0]);
        for (int j=1; j<strlen(name[i]); j++) {
            if (name[i][j-1] == ' ') {
                name[i][j] = toupper(name[i][j]);
            } else {
                name[i][j] = tolower(name[i][j]);
            }
        }
        printf("%s\n", name[i]);
    }

    return 0;
}