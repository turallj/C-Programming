// ucbugacin neceliyini qeyd edir
#include <stdio.h>
int main() {
    int a, b, c;
    printf("ucbugacin tereflerini daxil edin");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c) {
        printf("bu ucbugaq beraber terefli dir");
    }
    else if (a == b || b == c || a == c) {
        printf("bu ucbugaq beraber yanlidir");
    }
    else {
        printf("bu ucbugaq muxtelif terefli dir");
    }
    return 0;
}
