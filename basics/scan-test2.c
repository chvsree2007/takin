#include <stdio.h>

int main(void)
{
  int number, p = 0, n = 0;

  while (1) {
    printf("-> ");
    if (scanf("%d", &number) == 0) {
        fflush(stdin);
        printf("Err...\n");
   	continue;
    }
    fflush(stdin);
    if (number > 0) p++;
    else if (number < 0) n++;
    else break; /* 0 given */
  }

  printf("Read %d positive and %d negative numbers\n", p, n);
  return 0;
}
