/*
 *  src/e_string/e_strncpy.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "../e_string.h"

/*==============================================================================
          8 char* strncpy(char* dest, const char* src, size_t n):
    Copying up to n characters from the string pointed to, by src to dest.
==============================================================================*/
char* e_strncpy(char* dest, const char* src, e_size_t n) {
  char* ptr = dest;
  while (n--) *ptr++ = *src++;
  return dest;
}

// ANOTHER WAYS:
  // for (e_size_t i = 0; /* *src && */ i < n; i++) *(dest + i) = *src++;
