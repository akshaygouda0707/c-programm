//write function to print sum of two num passing argumentS
#include <stdio.h>
//fuction declaration/prototype
int sum(int a,int b);

//function call
int main() {
    int a,b;
    printf("enter number a:");
    scanf("%d",&a);
    printf("enter number b:");
    scanf("%d",&b);
    
    int s=sum(a,b);
    printf("sum is :%d",s);
    return 0;
}
//fuction definition
int sum(int a,int b){
  return a+b;
}

/*output:
enter number a:9
enter number b:8
sum is :17
*/