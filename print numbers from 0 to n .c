//print numbers form 0 to n taking input from user:
#include <stdio.h>

int main() {
    int n;
printf("enter n:");
scanf("%d",&n);
   int i=0;
   while(i<=n){
       printf("%d\n",i);
       i++;
   }
    return 0;
}


/*Output:
enter n:5
0
1
2
3
4
5
*/
