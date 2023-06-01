/*
 *  src/e_string/e_strchr.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "../e_string.h"

/*==============================================================================
                  6 char* strchr(const char* str, int c):
    Searching for the first occurrence of the character c (an unsigned char)
                in the string pointed to, by the argument str.
==============================================================================*/
char* e_strchr(const char* str, int c) {
  while (*str != c && *str != '\0') str++;
  if (*str == '\0' && c != 0) str = E_NULL;
  return (char*)str;
}
