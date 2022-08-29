//write function to print table
#include <stdio.h>
//fuction declaration/prototype
void printTable(int n);

//function call
int main() {
    int n;
    printf("enter number n:");
    scanf("%d",&n);
printTable(n);//actual parameter
    return 0;
}
//fuction definition
void printTable(int n){//formal parameter
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
}

/*output:
enter number n:5
5
10
15
20
25
30
35
40
45
50

*/