#include <stdio.h>
int main() {
    int cap, bat;
    scanf("%d %d", &cap, &bat);
    int real = cap/100*75;
    if (real%bat==0) {
        printf("%d", (int)(real/bat));
    } else printf("%d", real/bat+1);
}