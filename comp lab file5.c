//Write a c program to check whether the given number is a palindrome or not.//
#include<stdio.h>
int main() 
{
  int n,rev=0,rem=0,orig;
    printf("Enter an integer");
    scanf("%d",&n);
    orig=n;
    while(n!=0) 
	{
        rem=n%10;
        rev= rev*10+rem;
        n/=10;
    }
    if(orig==rev)
        printf("%d is a palindrome.",orig);
    else
        printf("%d is not a palindrome.",orig);

    return 0;
}
