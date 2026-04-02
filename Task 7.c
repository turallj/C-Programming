#include <stdio.h>
int main() {
    int eded, cem = 0, reqem;
    printf("Ededi daxil edin: ");
    scanf("%d", &eded);
    while (eded != 0) {
        reqem = eded % 10;
        cem += reqem * reqem;
        eded /= 10;
    }
    printf("Reqemlerin kvadratlari cemi: %d\n", cem);
    return 0;
}
