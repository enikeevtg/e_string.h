/*
 *  src/e_string/e_strncat.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "../e_string.h"

/*==============================================================================
            5 char* strncat(char* dest, const char* src, size_t n):
        Appending the string pointed to, by src to the end of the string
                pointed to, by dest up to n characters long.
==============================================================================*/
char* e_strncat(char* dest, const char* src, e_size_t n) {
  char* tmp = dest + e_strlen(dest);
  while (*src && n--) *tmp++ = *src++;
  *tmp = '\0';
  return dest;
}

// ANOTHER WAYS:
// char* e_strcat(char* dest, const char* src) {
//   e_size_t n = e_strlen(src);
//   dest = e_strncat(dest, src, n);
// }
