#include <stdio.h>
main(){
	int lower=-273,uper=1000,step=200;
	float fahr,celsius;
	celsius = lower;
	printf("%s \t %s\n","celsius","fahr");
	while(celsius <uper){
		fahr = (celsius+32)*9/5;
		printf("%6.2f \t %6.2f \n",celsius,fahr);
		celsius +=step;
	}
	return 0;
}
