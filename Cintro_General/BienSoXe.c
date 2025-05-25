#include <stdio.h>
#include <string.h>

int ok_City(char city[]) {
    if (((city[0] - '0')*10 + (city[1] - '0')) >= 11 && ((city[0] - '0')*10 + (city[1] - '0')) <= 99) {
        return 1;
    } else return 0;
}

int ok_Series(char series[]) {
    if (series[0] < 'A' || series[0] > 'Z') {
        return 0;
    } 
    return 1;
}

int ok_Number(char number[]) {
    for (int i=0; i<4; i++) {
        if (number[i] < '0' || number[i] > '9') {
            return 0;
        }
    }
    if (number[4] < '1' || number[4] > '9') {
        return 0;
    }
    return 1;
}

int main() {
    char bienso[13];

    fgets(bienso, sizeof(bienso), stdin);
    bienso[strcspn(bienso, "\n")] = '\0';
    if (strlen(bienso) > 9) {
        printf("0");
        return 0;
    }

    char city[3] = {bienso[0], bienso[1], '\0'};
    char series[3] = {bienso[2], bienso[3], '\0'};
    char number[6] = {bienso[4], bienso[5], bienso[6], bienso[7], bienso[8], '\0'};

    int check_City = ok_City(city);
    int check_Series = ok_Series(series);
    int check_Number = ok_Number(number);

    if (check_City && check_Series && check_Number) {
        printf("1\n");
    } else if (!check_City && check_Series && check_Number) {
        printf("-1\n");
    } else if (check_City && !check_Series && check_Number) {
        printf("-2\n");
    } else if (check_City && check_Series && !check_Number) {
        printf("-3\n");
    } else printf("0\n");

    return 0;
}