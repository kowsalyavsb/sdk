#include <stdio.h>

int main(void) {
	int base,e,i,power;
	printf("enter base:\n",base);
	scanf("%d\n",&base);
	printf("enter exponent:\n",e);
	scanf("%d \n",&e);
	power=1;
	for(i=1;i<=e;i++)
	power=power * base;
	printf("power:%d \n",power);
	return 0;
}
