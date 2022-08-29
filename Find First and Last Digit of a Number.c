//C Program to Find First and Last Digit of a Number:
#include <stdio.h>
int firstDigit(int n);
int lastDigit(int n);

int main() {
  int num,first_Digit,last_Digit;
  fputs("enter num:",stdout);
  scanf("%d",&num);
  first_Digit=firstDigit(num);
  last_Digit=lastDigit(num);
  printf("\n\nfirst digit of number is:%d\n",first_Digit);
  printf("last digit of number is:%d",last_Digit);
  return 0;
}

int firstDigit(int n){
    while(n >=10){
        n=n/10;
    }
    return n;
}
int lastDigit(int n){
    n=n%10;
}


/*output:
enter num:50
first digit of number is:5
last digit of number is:0
*/