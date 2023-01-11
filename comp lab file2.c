//Write a c program to convert a decimal number to a binary number without using array.//
#include<stdio.h>
int main()
{
	int n,b=0,i=1;
	scanf("%d",&n);
	while(n)
	{
		b=b+(n%2)*i;
		n=n/2;
		i=i*10;	
	}
	printf("%d",b);
	return 0;
}
