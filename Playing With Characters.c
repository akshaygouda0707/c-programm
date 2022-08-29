#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
 char ch;
    char s[100];
    char sen[100];
    
    scanf("%c\n",&ch);
  
    scanf("%[^\n]%*c\n",s);
    scanf("%[^\n]%*c\n",sen);

    printf("%c\n",ch);
 
    printf("%s\n",s);
    printf("%s\n",sen);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}



/*This challenge will help you to learn how to take a character, a string and a sentence as input in C.

To take a single character  as input, you can use scanf("%c", &ch ); and printf("%c", ch) writes a character specified by the argument char to stdout
*/
/*
This piece of code prints the character .

You can take a string as input in C using scanf(“%s”, s). But, it accepts string only until it finds the first space.

In order to take a line as input, you can use scanf("%[^\n]%*c", s); where  is defined as char s[MAX_LEN] where  is the maximum size of . Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered. Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.
*/