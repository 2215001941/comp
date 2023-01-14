//Write a c program to print a pattern by taking equal number of rows and columns by the user.//
#include<stdio.h>
int main()
{
   int n;

   printf("Enter the number of rows: ");
   scanf("%d",&n);

   for(int r=1; r<=n; r++)
   {
     for(int c=1; c<=n; c++)
     {
       printf("%3d",c);
     }
     printf("\n");
   }

   return 0;
}
