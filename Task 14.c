#include <stdio.h>
int main() {
    int a, b;
    printf("iki eded daxil et: ");
    scanf("%d %d", &a, &b);

    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    printf("EBOB = %d", a);
    return 0;
}
