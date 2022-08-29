//taking input from user until user enters odd num;
#include <stdio.h>

int main() {
    int n;
    do{
printf("enter n:");
scanf("%d",&n);
printf("%d\n",n);
if(n%2!=0){
    break;
}
   }while(1);
   printf("end");
    return 0;
}


/*Output:
enter n:6
6
enter n:6
6
enter n:8
8
enter n:10
10
enter n:11
11
end
*/
