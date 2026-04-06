#include <stdio.h>
int main(){
    int i, say=0;
    printf("ededi daxil edin");
    scanf("%d",&i);
    while(i!=0){
        i/=10;
        say++;
    }
    printf("edediniz %d reqemlidir", say);
}
