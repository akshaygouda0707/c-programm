//write function to print hello and goodbye
#include <stdio.h>
//fuction declaration/prototype
void printHello();
void printGoddbye();
//function call
int main() {
printHello();
printGoddbye();
    return 0;
}
//fuction definition
void printHello(){
    printf("hello!\n");
}
void printGoddbye(){
    printf("Goddbye:)\n");
}

/*output:
hello!
Goddbye:)
*/