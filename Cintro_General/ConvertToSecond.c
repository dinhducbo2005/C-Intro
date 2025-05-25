#include <stdio.h>
#include <string.h>
//13:02:54
int main() {
    char time[9];
    scanf("%s", time);
    getchar();
    if (time[2] != ':' || time[5] != ':' || time[0] - '0' > 9 || time[1] - '0' > 9 || time[3] - '0' > 9 || time[4] - '0' > 9 || time[6] - '0' > 9 || time[7] - '0' > 9) { 
        printf("INCORRECT");
    } else {
        int hh, mm, ss;
        hh = (time[0] - '0') * 10 + (time[1] - '0');
        mm = (time[3] - '0') * 10 + (time[4] - '0');
        ss = (time[6] - '0') * 10 + (time[7] - '0');
        
        if (hh<0 || hh > 23 || mm < 0 || mm > 59 || ss < 0 || ss > 59) {
            printf("INCORRECT");
            return 0;
        } else {
            int second = hh*3600 + mm*60 + ss;

            printf("%d", second);
        }
    }
    return 0;
}
