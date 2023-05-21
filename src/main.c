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
  // char str1[] = "School 21";
  // char str2[] = "Schol 21";
  // int n = 5;
  // printf("memcmp(): %d\n", memcmp(str1, str2, n));
  // printf("e_memcmp(): %d", e_memcmp(str1, str2, n));

  /*============================================================================
      3 memcpy()
  ============================================================================*/
  // char src[] = "source_";
  // char dest1[] = "original";
  // char dest2[] = "non_orig";

  // int n = 5;
  // printf("memcpy(): %s\n", (char*)memcpy(src, dest1, n));
  // printf("e_memcpy(): %s", (char*)e_memcpy(src, dest2, n));

  /*============================================================================
      3 memmove()
  ============================================================================*/
  // char src[8] = "source_";
  // char dest1[9] = "original";
  // //char dest2[] = "non_orig";

  // int n = 6;
  // printf("src before memmove(): %s", src);
  // printf("\nsrc after memmove(): %s\ndest after memmove(): %s\n", src, (char*)memmove(src, dest1, n));
  // //printf("e_memmove(): %s", (char*)e_memcpy(src, dest2, n));

  /*============================================================================
      6 strcat()
  ============================================================================*/
  // char src[6] = "_src_";
  // char dest_s21[80] = "_dest_";
  // strcat(dest_s21, "ertydhfrty", 11);
  // printf("dest_s21: %s\n\n", dest_s21);

  char* str = (char*)calloc(1, sizeof(char));

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

  // strncat(str, "Techie ", 2);
  //   puts(str);
  // strncat(str, "Delight ", 3);
  //   puts(str);
  // strncat(str, "– ", 4);
  //   puts(str);
  // strncat(str, "Ace ", 1);
  //   puts(str);
  // strncat(str, "the ", 2);
  //   puts(str);
  // strncat(str, "Technical ", 7);
  //   puts(str);
  // strncat(str, "Interviews", 8);
  //   puts(str);

  e_strncat(str, "Techie ", 2);
    puts(str);
  e_strncat(str, "Delight ", 3);
    puts(str);
  e_strncat(str, "– ", 4);
    puts(str);
  e_strncat(str, "Ace ", 1);
    puts(str);
  e_strncat(str, "the ", 2);
    puts(str);
  e_strncat(str, "Technical ", 7);
    puts(str);
  e_strncat(str, "Interviews", 8);
    puts(str);

  return 0;
}
