//sum of n natural numbers using while loop:
#include <stdio.h>

int main() {
   int n,i=0,sum=0;
   printf("enter number:");
   scanf("%d",&n);
   while(i<=n){
   sum=sum+i;
   i++;
   }
   printf("sum of n natural num is:%d",sum);
    return 0;
}

/*output:
enter number:5
sum of n natural num is:15
*/