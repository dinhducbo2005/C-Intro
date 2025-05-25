#include <stdio.h>
#define hh1 1728
#define hh2 1786
#define hh3 2074
#define hh4 2612
#define hh5 2919
#define hh6 3015
#define m1 1728
#define m2 2074
#define m3 2612
#define m4 3111
#define m5 3457
int main() {
    float kwh, phh, pm;
    scanf("%f", &kwh);
    if (kwh<=50) phh = kwh*hh1;
    else if (kwh<=100) phh = 50*hh1 + (kwh-50)*hh2;
    else if (kwh<=200) phh = 50*hh1 + 50*hh2 + (kwh-100)*hh3;
    else if (kwh<=300) phh = 50*hh1 + 50*hh2 + 100*hh3 + (kwh-200)*hh4;
    else if (kwh<=400) phh = 50*hh1 + 50*hh2 + 100*hh3 + 100*hh4 + (kwh-300)*hh5;
    else phh = 50*hh1 + 50*hh2 + 100*hh3 + 100*hh4 + 100*hh5 + (kwh-400)*hh6;

    if (kwh<=100) pm = kwh*m1;
    else if (kwh<=200) pm = 100*m1 + (kwh-100)*m2;
    else if (kwh<=400) pm = 100*m1 + 100*m2 + (kwh-200)*m3;
    else if (kwh<=700) pm = 100*m1 + 100*m2 + 200*m3 + (kwh-400)*m4;
    else pm = 100*m1 + 100*m2 + 200*m3 + 300*m4 + (kwh-700)*m5;

    printf("%.2f", (pm-phh)*1.1);
}