#include <stdio.h>
int main() {
    int a, cem = 0;
    printf("eded daxil et");
    scanf("%d", &a);
    do {
        cem += a % 10;
        a /= 10;
    } while (a > 0);
    printf("cem: %d\n", cem);
    return 0;
}
