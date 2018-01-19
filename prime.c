#include <iostream>
using namespace std;

int main() 
{
int num,i,count=0;
cin>>num;
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
cout<<"this is a prime number";
}
else
{
cout<<"this is a not prime number";

}
	return 0;
}
