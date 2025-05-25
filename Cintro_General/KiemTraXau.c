#include <stdio.h>
#include <string.h>

int readChar(char s) {
    return s - '0';
}
int main() {
    char s[20];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int size = strlen(s);
    int result[20];
    int count = 0;
    for (int i=0; i<size; i++) {
        if (readChar(s[i]) >= 0 && readChar(s[i]) <= 9) {
            result[count] = readChar(s[i]);
            count++;
        }
    }
    if (count == 0) {
        printf("0\nXau rong");
    } else {
        printf("%d\n", count);
        for (int i=0; i<count; i++) {
            printf("%d", result[i]);
        }
    }
    return 0;
}