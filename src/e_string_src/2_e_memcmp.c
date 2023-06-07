/*
 *  src/e_string/e_memcmp.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "../e_string.h"

/*==============================================================================
        2 int memcmp(const void* str1, const void* str2, size_t n):
              Comparing the first n bytes of str1 and str2.
==============================================================================*/
int e_memcmp(const void* str1, const void* str2, e_size_t n) {
  char* ptr1 = (char*)str1;
  char* ptr2 = (char*)str2;
  for (e_size_t i = 1; i < n && *ptr1 && *ptr1 == *ptr2; ptr1++, ptr2++) i++;
  return *ptr1 - *ptr2;
}
