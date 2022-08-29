//print numbers form 0 to n taking input from user and reverse it:
#include <stdio.h>

int main() {
    int n;
printf("enter n:");
scanf("%d",&n);
   int sum=0;
   for(int i=1, j=n; i<=n && j>=1;i++,j--){
       printf("%d\n",j);
       sum=sum+i;
   }
   printf("%d\n",sum);
    return 0;
}


/*Output:
enter n:5
5
4
3
2
1
15

*/
