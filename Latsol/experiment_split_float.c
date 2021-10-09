/* #include <stdio.h>

int main() {
  float num = 63.64;
  int intpart = (int)num;
  float decpart = (num - intpart)*100;
  int decpart2 = (int)decpart;
  printf("Num = %f, intpart = %d, decpart = %d\n", num, intpart, decpart2);
 
} */


#include <stdio.h>

int main () {
#define N_DECIMAL_POINTS_PRECISION (100) // n = 3. Three decimal points.

float f = 23.23;
int integerPart = (int)f;
int decimalPart = ((int)(f*N_DECIMAL_POINTS_PRECISION)%N_DECIMAL_POINTS_PRECISION);
printf("Float to Int 2 : %d\n", integerPart);
printf("Float to Int 2 : %d\n", decimalPart);
}