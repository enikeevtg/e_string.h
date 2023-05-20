#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "e_string.h"

int main() {
  /*============================================================================
      1 memchr()
  ============================================================================*/
  // char str[] = "School 21";
  // printf("%ld - %ld\n", strlen(str), e_strlen(str));
  // char* res;
  // for (int i = 65; i < 123; i++)
  //   if ((res = memchr(str, i, 3)) != E_NULL) printf("%c\n", *res);
  // printf("\n\n");
  // for (int k = 65; k < 123; k++)
  //   if ((res = e_memchr(str, k, 3)) != E_NULL) printf("%c\n", *res);

  /*============================================================================
      2 memcmp()
  ============================================================================*/
  char str1[] = "School 21";
  char str2[] = "Schol 21";
  int n = 5;
  printf("memcmp(): %d\n", memcmp(str1, str2, n));
  printf("e_memcmp(): %d", e_memcmp(str1, str2, n));

  /*============================================================================
      6 strcat()
  ============================================================================*/
  // char src[6] = "_src_";
  // char dest_s21[80] = "_dest_";
  // strcat(dest_s21, "ertydhfrty", 11);
  // printf("dest_s21: %s\n\n", dest_s21);

  // char* str = (char*)calloc(1, sizeof(char));

  // strcat(str, "Techie ");
  // strcat(str, "Delight ");
  // strcat(str, "– ");
  // strcat(str, "Ace ");
  // strcat(str, "the ");
  // strcat(str, "Technical ");
  // strcat(str, "Interviews");

  // e_strcat(str, "Techie ");
  // e_strcat(str, "Delight ");
  // e_strcat(str, "– ");
  // e_strcat(str, "Ace ");
  // e_strcat(str, "the ");
  // e_strcat(str, "Technical ");
  // e_strcat(str, "Interviews");

  // puts(str);

  return 0;
}
