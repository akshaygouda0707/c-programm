//print table of 2:
#include <stdio.h>

int main() {
    int n;
printf("enter n:");
scanf("%d",&n);
  
   for(int i=1; i<=10;i++){
       printf("%d\n",n*i);
   }
    return 0;
}


/*Output:
enter n:2
2
4
6
8
10
12
14
16
18
20
*/
