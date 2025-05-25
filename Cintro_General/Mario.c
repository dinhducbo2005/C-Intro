#include <stdio.h>
#include <string.h>

int main() {
    int N, M, r, c;
    static int maze[10000][10000];

    //Nhập kích thước ma trận và vị trí Mario
    scanf("%d %d %d %d", &N, &M, &r, &c);
    //Nhập ô trống và ô bị chặn
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=M; j++) {
            scanf("%d", &maze[i][j]);
        }
    }
    getchar();

    //Nhập bước di chuyển của Mario và thay đổi vị trí của Mario
    char movement[10000];
    while(1) {
        fgets(movement, sizeof(movement), stdin);
        movement[strcspn(movement, "\n")] = '\0';
        if (strcmp(movement, "#") == 0) {
            break;
        }
        //Di chuyển lên trên
        if (strcmp(movement, "move-up") == 0) {
            if (r > 1 && maze[r-1][c] == 0) {
                r--;
                c = c;
            }
        }
        //Di chuyển xuống dưới
        else if (strcmp(movement, "move-down") == 0) {
            if (r < N && maze[r+1][c] == 0) {
                r++;
                c = c;
            }
        }
        //Di chuyển sang phải
        else if (strcmp(movement, "move-right") == 0) {
            if (c < M && maze[r][c+1] == 0) {
                c++;
                r = r;
            }
        }
        //Di chuyển sang trái
        else if (strcmp(movement, "move-left") == 0) {
            if (c > 1 && maze[r][c-1] == 0) {
                c--;
                r = r;
            }
        }
        //printf("%d %d\n", r, c);
    }

    //In ra vị trí của Mario
    printf("%d %d", r, c);
    return 0;
}