#include <stdio.h>

main()
{
  int celsius;
  for (celsius = -20; celsius <= 140; celsius = celsius + 20) {
    printf("%6d %6.1f\n", celsius, (celsius * 9.0 / 5.0 + 32));
  }
}
