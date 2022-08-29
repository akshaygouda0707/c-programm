//sum of n natural numbers using recursion:
#include <stdio.h>
int sumofnaturalnumbers(int num);
int main() {
   int n;
   fputs("enter number:",stdout);
   scanf("%d",&n);
  printf("sum of natural num is:%d",sumofnaturalnumbers(n));

    return 0;
}
int sumofnaturalnumbers(int num){
    int i,sum=0;
    if(num==0){
        return num;
    }else{
        return num+sumofnaturalnumbers(num-1);
    }
}

/*output:
enter number:5
sum of n natural num is:15
*/