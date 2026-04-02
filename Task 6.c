#include <stdio.h>
int main() {
    int eded, onluq, teklik, cem;
    printf("2 reqemli ededi daxil edin: ");
    scanf("%d", &eded);
    onluq = eded / 10;
    teklik = eded % 10;
    cem = onluq * onluq + teklik * teklik;
    printf("Reqemlerin kvadratlari cemi: %d\n", cem);
    return 0;
}
