#include <stdio.h>
#include <string.h>

int main() {
  char* str;
  int a = 11;
  int b = 011;
  sprintf(str, "a = %i, b =    %i", a, b);
  printf("%s\n", str);
  int c;
  int d;
  sscanf(str, "a = %i, b = %i", &c, &d);
  printf("c = %d\nd = %d", c, d);
  return 0;
}
