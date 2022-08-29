//C Program to Find First and Last Digit of a Number using loop:
#include <stdio.h>
int main() {
  int n,first_Digit,last_Digit;
  fputs("enter num:",stdout);
  scanf("%d",&n);
  first_Digit=n;
  while(first_Digit>=10){
    first_Digit=first_Digit/10;
  }
  last_Digit=n%10;
  printf("\n\nfirst digit of number is:%d\n",first_Digit);
  printf("last digit of number is:%d",last_Digit);
  return 0;
}



/*output:
enter num:50
first digit of number is:5
last digit of number is:0
*/