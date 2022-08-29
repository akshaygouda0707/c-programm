// recursion program to print fcatorial of n natural number;(1,2,3...........n-1,n)
#include <stdio.h>
int fact(int n);
int main() {
    int n;
    scanf("%d",&n);
    printf("enter number:");
    printf("fact of n num is:%d",fact(n));
    
    return 0;
}
int fact(int n){
    if(n==1){
        return 1;
    }
  int factNm1=fact(n-1);
  int factN=factNm1*n;
  return factN;
}


/*output:
6
enter number:fact of n num is:720
*/