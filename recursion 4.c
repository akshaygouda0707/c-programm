// write function to calculate percentage of three sub math ,science, kannada.
#include <stdio.h>
#include <math.h>
float calcuPercentage(float math,float science,float kannada);
int main() {
    float mat=98;
    float sc=100;
    float ka=100;
    printf("percentage is:%f\%\t",calcuPercentage(mat,sc,ka));
    return 0;
}
float calcuPercentage(float math,float science,float kannada){
  return((math+science+kannada)/3.0);
}


/*output:
percentage is:99.333336%
*/