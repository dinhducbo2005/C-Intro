#include <stdio.h>
#include <string.h>

int main() {
    char id[1000][10], bienso[1000][13], day[1000][11], time[1000][9];
    char biensovipham[13];
    char day_vipham[11];
    int log = 0;
    int function;

    char line[100];
    while (fgets(line, sizeof(line), stdin)) {
        if (line[0] == '#') break;

        // Tách chuỗi thành 4 phần
        sscanf(line, "%s %s %s %s", id[log], bienso[log], day[log], time[log]);
        log++;
    }

    scanf("%d", &function);
    getchar();
    if (function == 1) {
        fgets(biensovipham, sizeof(biensovipham), stdin);
        biensovipham[strcspn(biensovipham, "\n")] = '\0';
        int found = 0;
        for (int i=0; i<log; i++) {
            if (strcmp(bienso[i], biensovipham) == 0) {
                printf("%s %s\n", day[i], time[i]);
                found = 1;
            }
        }
        if (found == 0) {
            printf("-1\n");
        }
    } else {
        fgets(day_vipham, sizeof(day_vipham), stdin);
        day_vipham[strcspn(day_vipham, "\n")] = '\0';

        int count = 0;
        char xe[1000][13];
        
        for (int i=0; i<log; i++) {
            if (strcmp(day[i], day_vipham) == 0) {
                int found = 0;
                for (int j=0; j<count; j++) {
                    if(strcmp(bienso[i], xe[j]) == 0) {
                        found = 1;
                        break;
                    }
                }
                if (found == 0) {
                    strcpy(xe[count++], bienso[i]);
                }
            }
        }

        printf("%d\n", count);
    }

    return 0;
}