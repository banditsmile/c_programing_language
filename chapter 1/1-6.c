#include <stdio.h>
int main(){
	int c;
	c = getchar();
	printf("\n%d\n",(c!=EOF));
	c = EOF;
	printf("%d\n",(c!=EOF));
}
