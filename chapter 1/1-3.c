#include <stdio.h>
main(){
	int lower=0,uper=300,step=20;
	float fahr,celsius;
	printf("fahr \t celsius\n");
	for(fahr=lower;fahr<uper;fahr=fahr+step){
		celsius = 5*(fahr-32)/9;
		printf("%3f \t %6.2f \n",fahr,celsius);
	}

}
