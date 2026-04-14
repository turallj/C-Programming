#include <stdio.h>
#include <stdlib.h>
//stdlib-random kitabxanasi
int random_reqem(){
	return rand()%100;
}
int main(){
	int tesadufi_eded=random_reqem();
	printf("%d",tesadufi_eded);
	return 0;
}
