#include <stdio.h>
#define VERSION 1

int main(void)
{
#ifdef VERSION
  #if VERSION > 2
    printf("VERSION > 2\n");
  #else
    printf("VERSION : %d\n", VERSION);
  #endif
#else
    printf("Unkown VERSION\n");
#endif

  return 0;
}
