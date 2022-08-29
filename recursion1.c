// recursion program to print sum of n natural number;(1,2,3...........n-1,n)
#include <stdio.h>
int sum(int n);
int main() {
    printf("enter number n:%d");
    int n;
    scanf("%d",&n);
    printf("sum of n num is:%d",sum(n));
    
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
  int sumNm1=sum(n-1);
  int sumN=sumNm1+n;
  return sumN;
}


/*output:
sum of n num is:15
*/