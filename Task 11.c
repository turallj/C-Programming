// mini hesablayici
#include <stdio.h>
int main() {
    float eded1, eded2;
    char hesab;
    printf("iki eded daxil et");
    scanf("%f %f", &eded1, &eded2);
    printf("daxil etdiyiniz iki eded ucun hesab emelini sec (+,-,*,/)");
    scanf(" %c", &hesab);
    switch (hesab) {
        case '+':
            printf("%f+%f=%f", eded1, eded2, eded1 + eded2);
            break;
        case '-':
            printf("%f-%f=%f", eded1, eded2, eded1 - eded2);
            break;
        case '*':
            printf("%f*%f=%f", eded1, eded2, eded1 * eded2);
            break;
        case '/':
            printf("%f/%f=%f", eded1, eded2, eded1 / eded2);
            break;
        default:
            printf("hesab emeli duzgun edilmeyib");
            break;
    }
    return 0;
}
