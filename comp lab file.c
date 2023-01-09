//Write a c program to check a given number is divisible by 3 or 7 or both or none.//
#include<stdio.h>
int main()
{
int a;
if(a%3==0)
{
	printf("a is divisible by 3");
	if(a%7==0)
	{
		printf("a is divisible by both");
	}
	else
	printf("a is only divisible by 3");
}
else
{
	if(a%7==0)
	printf("a is only divisible by 7");
	else
	printf("a is divisible by none");
}
	}
