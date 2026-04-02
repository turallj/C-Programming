//yas kategoriyalari
#include <stdio.h>
int main() {
    int yas;
    printf("yasinizi daxil edin: ");
    scanf("%d", &yas);
    if (yas < 0) {
        printf("yas 0-dan kicik olmaz!");
    }
    else if (yas <= 15) {
        printf("size oyun meydancasina girise icaze verilir");
    }
    else if (yas <= 35) {
        printf("siz gencsiz");
    }
    else if (yas <= 65) {
        printf("siz orta yaslisiz");
    }
    else {
        printf("siz mudrik insansiz");
    }
    return 0;
}
