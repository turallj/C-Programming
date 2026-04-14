#include <stdio.h>
#include <stdlib.h>
//stdlib-random kitabxanasi
#include <time.h>
//time-yenilenmesi ucun
int random_reqem(){
	return rand()%100;
}
int main(){
	srand(time(0));
	int tesadufi_eded=random_reqem();
	printf("%d",tesadufi_eded);
	return 0;
}
