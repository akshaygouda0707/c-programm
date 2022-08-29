//program to print the reverse table ;
#include <stdio.h>

int main() {
    int n;
printf("enter n:");
scanf("%d",&n);
for(int i=10;i>=1;i--){
    printf("%d\n",n*i);
}
    return 0;
}


/*Output:
enter n:2
20
18
16
14
12
10
8
6
4
2
*/
