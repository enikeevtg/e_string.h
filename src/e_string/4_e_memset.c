/*
 *  src/e_string/e_memset.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "../e_string.h"

/*==============================================================================
                4 void* memset(void* str, int c, size_t n):
          Copying the character c (an unsigned char) to the first n
          characters of the string pointed to, by the argument str.
==============================================================================*/
void* e_memset(void* str, int c, e_size_t n) {
  char* ptr = (char*)str;
  while (n-- && *ptr) *ptr++ = c;
  if (!*ptr && !n) {  // duck tape "\_(o_o)_/"
    *ptr++ = c;
    *ptr++ = '\n';
    *ptr++ = '\0';
  }
  return str;
}
