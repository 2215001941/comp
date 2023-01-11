//Write a c program to check whether the given number is an armstrong or not.//
#include <math.h>
#include <stdio.h>
int checkArmstrongNumber(int n);
int main() {
   int n, flag;
   printf("Enter a positive integer: ");
   scanf("%d", &n);
flag = checkArmstrongNumber(n);
   if (flag == 1)
      printf("%d is an Armstrong number.", n);
   else
      printf("%d is not an Armstrong number.", n);
   return 0;
}
int checkArmstrongNumber(int num) {
   int originalNum, remainder, n = 0, flag;
   double result = 0.0;
   for (originalNum = num; originalNum != 0; ++n) {
      originalNum /= 10;
   }
   for (originalNum = num; originalNum != 0; originalNum /= 10) {
      remainder = originalNum % 10;
      result += pow(remainder, n);
   }
   if (round(result) == num)
      flag = 1;
   else
      flag = 0;
   return flag;
}
