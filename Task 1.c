#include <stdio.h>
int main() {
    float qiymet, mebleg;
    int say;
    printf("Qiymet: ");
    scanf("%f", &qiymet);
    printf("Say: ");
    scanf("%d", &say);
    mebleg = qiymet * say;
    printf("Odenilecek mebleg: %.2f AZN", mebleg);
    return 0;
}
