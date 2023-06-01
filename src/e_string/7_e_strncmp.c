/*
 *  src/e_string/e_strncmp.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "../e_string.h"

/*==============================================================================
        7 int strncmp(const char* str1, const char* str2, size_t n):
            Comparing at most the first n bytes of str1 and str2.
==============================================================================*/
int e_strncmp(const char* str1, const char* str2, e_size_t n) {
  for (e_size_t i = 0; (*str1) && (*str1 == *str2) && (i < n); str1++, str2++)
    i++;
  return *str1 - *str2;
}
