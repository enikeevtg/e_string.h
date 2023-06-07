/*
 *  src/e_string/e_strcmp.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "../e_string.h"

/*==============================================================================
              9. int strcmp(const char* str1, const char* str2):
  Comparing the string pointed to, by str1 to the string pointed to by str2.
==============================================================================*/
int e_strcmp(const char* str1, const char* str2) {
  for (; (*str1) && (*str1 == *str2); str1++) str2++;
  return *str1 - *str2;
}
