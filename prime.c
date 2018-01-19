#include <stdio.h>


int main() 
{
int num,i,count=0;
scanf("%d",&num);
for(i=2;i<num;i++)
{
   if(num%i==0)
   {
   count++;
   break;
   }
}
if(count==0)
{
printf("this is a prime number");
}
else
{
printf("this is a not prime number");

}
	return 0;
}
