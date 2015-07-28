#include <stdio.h>
int main(){
	int celsius=300,lower=0,step=20,fahr;
	for(;celsius>lower;celsius-=step){
		fahr = 5*(celsius-32)/9;
		printf("%6d \t %6d \n",celsius,fahr);
	}
}
