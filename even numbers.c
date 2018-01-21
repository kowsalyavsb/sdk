#include <stdio.h>

int main()
{
	int num,m,n;
	scanf("%d\n %d\n ",&m,&n);
	printf("print even number in a given range m to n:\n");
	for(num=m;num<=n;num++)
	{
		if(num%2==0)
		printf("%d\n",num);
		
	}
	return 0;
}
