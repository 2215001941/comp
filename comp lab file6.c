//Write a c program to check given year is a leap year or not using if-else ladder.//
#include<stdio.h>
int main()
{
int a;
if(a%4 && a%100!=0)
printf("it is a lipear");
else if(a%400==0)
printf("it is a lipear");
else
printf("a is not a lipear");
return 0;
}
