#include <stdio.h>
float kineticEnergy (float m, float v) {
    return 0.5*m*v*v;
}
int main() {
    float m, v;
    while (1) {
        scanf("%f %f", &m , &v);
        if (m>0 && v>0) {
            float ke = kineticEnergy(m, v);
            printf("%.2f", ke);
            break;
        }
    }
    return 0;
}