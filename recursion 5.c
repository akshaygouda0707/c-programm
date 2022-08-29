// write function to calculate fiibonacci of n numbers;(0,1,2,3,5,8,13......)
/*fib0=fib(0)+(1)=1;
fib1=fib(0)+fib(1)=2;
fib2=fib(1)+fib(2)=3;....
...*/
#include <stdio.h>
int fib(int n);
int main() {
    fib(6);
    return 0;
}
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN=fibNm1+fibNm2;
    printf("fib off %d is:%d\n",n,fibN);
    return fibN;
}
/*Output:
fib off 2 is:1
fib off 3 is:2
fib off 2 is:1
fib off 4 is:3
fib off 2 is:1
fib off 3 is:2
fib off 5 is:5
fib off 2 is:1
fib off 3 is:2
fib off 2 is:1
fib off 4 is:3
fib off 6 is:8
*/