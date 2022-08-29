//sum of n natural numbers
#include <stdio.h>

int main() {
   int n;
   printf("enter number:");
   scanf("%d",&n);
   int sum=n*(n+1)/2;
   printf("sum of n natural num is:%d",sum);
   
    return 0;
}