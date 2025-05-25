#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    
    while (fgets(s, 1000, stdin) != NULL) {
        int i = 0;
        while (s[i] != '\0') {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = toupper(s[i]);
            }
            i++;
        }
        printf("%s", s);
    }
    return 0;
}
