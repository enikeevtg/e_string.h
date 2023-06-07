/*
 *  src/e_string/e_memchr.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "../e_string.h"

/*==============================================================================
              1 void* memchr(const void* str, int c, size_t n):
    Searching for the first occurrence of the character c (an unsigned char)
      in the first n bytes of the string pointed to, by the argument str.
==============================================================================*/
void* e_memchr(const void* str, int c, e_size_t n) {
  char* ptr = (char*)str;
  for (e_size_t i = 0; i < n && *ptr != c && *ptr; i++) ptr++;
  if (ptr == (char*)str + n) ptr = E_NULL;
  return (void*)ptr;
}
