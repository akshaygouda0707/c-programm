//program to print the factorial of n numbers ;
#include <stdio.h>

int main() {
    int n;
printf("enter n:");
scanf("%d",&n);
int fact=1;
for(int i=1;i<=n;i++){
    fact=fact*i;
}
printf("final factorial is: %d\n",fact);
    return 0;
}


/*Output:
enter n:5
final factorial is: 120
*/
