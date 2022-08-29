//sum of n natural numbers between range:
#include <stdio.h>
int sumofnaturalnumbers(int num);
int main() {
   int n,i,sum=0;
   fputs("enter first number:",stdout);
   scanf("%d",&i);
    fputs("enter last number:",stdout);
   scanf("%d",&n);
   i=0;
  do
   {
   sum=sum+i;
   i++;
   }while(i<=n);
   printf("sum of natural num is:%d",sum);

    return 0;
}


/*output:
enter number:5
sum of n natural num is:15
*/