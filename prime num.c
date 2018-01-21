#include <stdio.h>

int main(void) {
	int n,k,remark;
	printf("the prime number between  are\n",n,k);
	for(n=1;n<=10;++n)
	{
		remark =0;
		for(k=2;k<=n/2;k++)
		{
			if(n%k==0)
			{
				remark++;
				break;
				
			}
		}
		if(remark==0)
		printf("\n %d",n);
	}
	return 0;
}
