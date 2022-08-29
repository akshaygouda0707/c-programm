//sum of n natural numbers using function:
#include <stdio.h>
int sumofnaturalnumbers(int num);
int main() {
   int n;
   fputs("enter number:",stdout);
   scanf("%d",&n);
   sumofnaturalnumbers(n);
 
    return 0;
}
int sumofnaturalnumbers(int num){
    int i,sum=0;
    for(i=0;i<=num;i++){
        sum=sum+i;
    }
    printf("sum of n natural num:%d",sum);
}

/*output:
enter number:5
sum of n natural num is:15
*/