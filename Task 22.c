#include <stdio.h>
int main(){
	for (int i=1;i<=10;i++){
		printf("\n");
		//n boslug qoyur
		if (i==5){
			continue;
			//continue-davam etdirir dayanmir emeliyyat
		}
		else if(i==8){
			break;
			//break-emeliyyati dayandirir son qeyd olunan reqemi gormur
		}
	for (int j=1; j<=10;j++){
		printf("%dx%d=%d \n",i,j,i*j);
	}
}
return 0;
}
