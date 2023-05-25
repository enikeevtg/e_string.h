#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "e_string.h"

int main() {
  /*============================================================================
      1 memchr()
  ============================================================================*/
  //   char str[] = "School 21";
  //   int c = 'o';
  //   int bytes = 5;
  //   printf("memchr result: \"%s\"\n", (char*)memchr(str, c, bytes));
  //   printf("e_memchr result: \"%s\"\n", (char*)e_memchr(str, c, bytes));

  /*============================================================================
      2 memcmp()
  ============================================================================*/
  //   char str1[] = "School 21";
  //   char str2[] = "Schol 21";
  //   int n = 5;
  //   printf("memcmp(): %d\n", memcmp(str1, str2, n));
  //   printf("e_memcmp(): %d", e_memcmp(str1, str2, n));

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
      4 memset()
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
      5 strncat()
  ============================================================================*/
  // char* str = (char*)calloc(1, sizeof(char));

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
      9 strcspn()
  ============================================================================*/
  // char str1[] = "1234a56b78C90d";
  // char str2[] = "ABCD";
  // printf("strcspn result: %ld\n",
  //        strcspn((const char*)str1, (const char*)str2));
  // printf("e_strcspn result: %ld\n",
  //        e_strcspn((const char*)str1, (const char*)str2));

  /*============================================================================
      10 strerror()
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

  //   float c = -2230.584384;
  //   char* intstr = e_strerror(c);
  //   printf("string: %s\nlength = %ld\n", intstr, e_strlen(intstr));

  /*============================================================================
      12 e_strpbrk()
  ============================================================================*/
  char str1[] = "wertyuikjhgf";
  char str2[] = "jik";
  printf("strpbrk result: %s\n", strpbrk(str1, str2));
  printf("e_strpbrk result: %s\n", e_strpbrk(str1, str2));

  /*============================================================================
      13 e_strrchr()
  ============================================================================*/
  //   char str1[] = "wertyuiktjhzgf";
  //   int c = 't';
  //   printf("strrchr result: \"%s\"\n\"%c\"\n", strrchr(str1, c), c);
  //   printf("e_strrchr result: \"%s\"\n", e_strrchr(str1, c));
  // for (int i = 0; i < 512; i++) printf("%c ", i);

  /*============================================================================
      14 e_strstr()
  ============================================================================*/
//   char str1[] = "Сэлам, кадерле дуслар! Мин \"Мэктэптэ егерме бер\" укыйм:)";
//   char str2[] = "ер";
//   printf("strstr result: \"%s\"\n", strstr(str1, str2));
//   printf("e_strstr result: \"%s\"", e_strstr(str1, str2));

  /*============================================================================
      15 e_strstr()
  ============================================================================*/
//   char str1[] = "Hey guys! What\'s up! I study at \"School 21\" programming school:)";
//   char str2[] = "prog";
//   printf("strtok result: \"%s\"\n", strtok(str1, str2));
//   printf("e_strstr result: \"%s\"", e_strstr(str1, str2));
  return 0;
}
