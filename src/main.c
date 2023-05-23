#include <stdio.h>
//#include <stdlib.h>

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
  //  char dest1[] = "1234567890";
  //  char dest2[] = "1234567890";

  // int n = 4;
  // (char*)memcpy(dest1 + 2, dest1, n);
  // printf("memcpy(): %s\n", dest1);
  // (char*)e_memcpy(dest2 + 2, dest2, n);
  // printf("e_memcpy(): %s", dest2);

  /*============================================================================
      4 memmove()
  ============================================================================*/
  // // char src[8] = "source_";
  // char dest1[11] = "1234567890";
  // char dest2[11] = "1234567890";

  // int n = 3;
  // // printf("src before memmove(): %s", src);
  // printf("\nmemmove() result: %s\ndest1 after memmove(): %s\n",
  //        (char*)memmove(dest1 + 4, dest1 + 2, n), dest1);
  // printf("\ne_memmove() result: %s\ndest2 after e_memmove(): %s\n",
  //        (char*)e_memmove(dest2 + 4, dest2 + 2, n), dest2);

  /*============================================================================
      4 memmove() vs memcpy()
  ============================================================================*/
  // char dest1[11] = "1234567890";
  // char dest2[11] = "1234567890";

  // int n = 3;
  // printf("\nmemcpy() result: %s\ndest1 after memcpy(): %s\n\n",
  //         (char*)memcpy(dest1 + 3, dest1 + 4, n), dest1);
  // printf("memmove() result: %s\ndest1 after memmove(): %s\n\n",
  //         (char*)memmove(dest2 + 3, dest2 + 4, n), dest2);

  // char str[] = "OpenAI is great!";
  // memmove(str + 3, str, 10);
  // printf("Using memmove: %s\n", str);

  // char str2[] = "OpenAI is great!";
  // memcpy(str2 + 3, str2, 10);
  // printf("Using memcpy: %s\n", str2);

  /*============================================================================
      5 memset()
  ============================================================================*/
  // char dest1[] = "1234567890";
  // char dest2[] = "1234567890";
  // int c = 88;
  // size_t n = 5;
  // printf("memset() result: %s\ndest1 after memmset(): %s\n",
  //        (char*)memset(dest1, c, n), dest1);
  // printf("e_memset() result: %s\ndest2 after e_memmset(): %s\n",
  //        (char*)e_memset(dest2, c, n), dest2);

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

  // strncat(str, "Techie ", 2);
  // puts(str);
  // strncat(str, "Delight ", 3);
  // puts(str);
  // strncat(str, "– ", 4);
  // puts(str);
  // strncat(str, "Ace ", 1);
  // puts(str);
  // strncat(str, "the ", 2);
  // puts(str);
  // strncat(str, "Technical ", 7);
  // puts(str);
  // strncat(str, "Interviews", 8);
  // puts(str);

  // e_strncat(str, "Techie ", 2);
  // puts(str);
  // e_strncat(str, "Delight ", 3);
  // puts(str);
  // e_strncat(str, "– ", 4);
  // puts(str);
  // e_strncat(str, "Ace ", 1);
  // puts(str);
  // e_strncat(str, "the ", 2);
  // puts(str);
  // e_strncat(str, "Technical ", 7);
  // puts(str);
  // e_strncat(str, "Interviews", 8);
  // puts(str);

  /*============================================================================
      13 strcspn()
  ============================================================================*/
  // char str1[] = "1234a56b78C90d";
  // char str2[] = "ABCD";
  // printf("strcspn result: %ld\n",
  //        strcspn((const char*)str1, (const char*)str2));
  // printf("e_strcspn result: %ld\n",
  //        e_strcspn((const char*)str1, (const char*)str2));

  /*============================================================================
      14 strerror()
  ============================================================================*/
  // find for error message list
  //   e_size_t max = 1;
  //   e_size_t size = 0;
  //   for (int i = -5; i < 111; i++) {
  //     printf("\"%s\", /*%d*/  \\\n", strerror(i), i);
  //     size = e_strlen(strerror(i));
  //     if (size > max) max = size;
  //   }
  //   printf("%ld\n", max);
  // for (int i = 0; i < ERR_NUM; i++) printf("\t%d\t\"%s\"\n", i,
  // e_strerror(i));
  float c = -2230.584384;
  printf("%s\n", e_strerror(c));

  char str[80];
  sprintf(str, "%1.2d", (int)c);
  printf("%s\n", str);
  return 0;
}
