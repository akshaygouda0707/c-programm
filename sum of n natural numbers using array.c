//sum of n natural numbers using array:
#include <stdio.h>
int sumofnaturalnumbers(int num);
int main() {
   int n,i,sum=0,arr[50];
   fputs("enter array number:",stdout);
   scanf("%d\n",&n);
   i=0;
  do
   {
   scanf("%d",&arr[i]);
   sum=sum+arr[i];
   i++;
   }while(i<n);
   printf("sum of natural num is:%d\n",sum);

    return 0;
}


/*output:
enter array number:5
1
2
3
4
5
sum of natural num is:15
*/