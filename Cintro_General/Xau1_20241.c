//VSC chạy đúng nhưng HUSTACK chạy sai???

#include <stdio.h>
#include <string.h> 

int main() {
    int lines;
    char sentence[1000][1024];
    int word[1000] = {0};
    int total_word = 0;

    scanf("%d", &lines);
    getchar();

    for (int i=0; i<lines; i++) {
        fgets(sentence[i], sizeof(sentence[i]), stdin);
        sentence[i][strcspn(sentence[i], "\n")] = '\0';

        int j = 0;
        int in_word = 0;
        
        while (sentence[i][j]) {
            if (sentence[i][j] != ' ') {
                if (in_word == 0) {
                    word[i]++;
                    in_word = 1;
                } 
            } else {
                in_word = 0;
            }
            j++;
        }
        total_word += word[i];
    }

    printf("%d\n", total_word);
    for (int i=0; i<lines; i++) {
        printf("%d\n", word[i]);
    }
}