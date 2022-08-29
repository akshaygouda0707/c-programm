//sum of n natural numbers using for loop:
#include <stdio.h>

int main() {
   int n,i,sum=0;
   printf("enter number:");
   scanf("%d",&n);
   for(i=0;i<=n;i++){
   sum=sum+i;
   }
   printf("sum of n natural num is:%d",sum);
    return 0;
}

/*output:
enter number:5
sum of n natural num is:15
*/