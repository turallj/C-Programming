#include <stdio.h>
int main() {
    int i, n;
    printf("Eded daxil et: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d-nin kvadrati = %d\n", i, i * i);
    }
    return 0;
}
