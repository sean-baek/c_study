#include <stdio.h>

#define PRINT(x) printf(#x "\n");
#define SAVE(name, num, value) name##num = value

int main(void)
{
  int data1 = 0, data2 = 0;
  
  PRINT(Hello! World!);

  SAVE(data,1,100);
  SAVE(data,2,500);

  printf("data1 : %d\n", data1);
  printf("data2 : %d\n", data2);

  return 0;
}
