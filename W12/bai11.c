#include <stdio.h> 
const int MAX = 4; 
int main () {
    char *names[] = {"Zara Ali", "Hina Ali", "Nuha Ali", "Sara Ali"};    
    for (int i=0; i<MAX; i++){
        for (int j=0; j<2; j++) {
            printf("%c ", names[i][j]);
        }
        printf("\n");
    }
    return 0;
}
