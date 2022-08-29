//write function to print namste if user is indian &bonjure if the user is french
#include <stdio.h>
//fuction declaration/prototype
void Namaste();
void Bonjure();
//function call
int main() {
    printf("enter f for french & i for indian:");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
Namaste();
    }
else{
   Bonjure();
}
    return 0;
}
//fuction definition
void Namaste(){
    printf("namaste!\n");
}
void Bonjure(){
    printf("Bonjure!\n");
}

/*output:
enter f for french & i for indian:i
namaste!

enter f for french & i for indian:f
Bonjure!
*/