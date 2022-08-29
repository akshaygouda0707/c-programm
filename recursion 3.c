// recursion program to convert clsuis temp to faranhite.
#include <stdio.h>
float convertTemp(float celsius);
int main() {
    float celsius;
    scanf("%f",&celsius);
    printf("faranhite is:%f",convertTemp(celsius));
    
    return 0;
}
float convertTemp(float celsius){
 float faranhite=celsius *(9.0/5.0)+32;
  return faranhite;
}


/*output:
52
faranhite is:125.599998
*/