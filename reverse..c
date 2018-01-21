#include <stdio.h>

int main(void) {
	int num,temp, digit,a;
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		digit=temp % 10;
		temp=temp/10;
		a=a*10+digit;
		
	}
	printf("the reverse number is %d",a);
	 return 0;
	
}
