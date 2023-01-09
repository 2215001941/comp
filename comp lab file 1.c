//Write a c program to check given number is prime or not.//
#include<stdio.h>
int main()
{
int a,c=0;
if(a==1)
printf("neither prime nor composite");
else if(a==2)
printf("prime");
else
{
for(int i=2;i<=a/2;i++)
	if(a%i==0)
	c++;
}
	if(c==0)
	printf("prime");
	else
	printf("not prime");
	}
return 0;
}
