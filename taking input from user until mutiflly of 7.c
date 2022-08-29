//taking input from user until user enters mutliple of 7 ;
#include <stdio.h>

int main() {
    int n;
    do{
printf("enter n:");
scanf("%d",&n);
printf("%d\n",n);
if(n%7==0){
    break;
}
   }while(1);
   printf("end");
    return 0;
}


/*Output:
enter n:8
8
enter n:9
9
enter n:10
10
enter n:6
6
enter n:12
12
enter n:21
21
end
*/
