#include <stdio.h>

/* pring Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

#define LOWER 0
#define UPPER 300
#define STEP 20

main ()
{
  float fahr, celsius;

  fahr = LOWER;
  printf("%3s %6s\n", "F", "C");
  while (fahr <= UPPER) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + STEP;
  }
}
