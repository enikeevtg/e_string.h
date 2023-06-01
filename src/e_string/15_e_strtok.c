/*
 *  src/e_string/e_strtok.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "e_string.h"

/*==============================================================================
              15 char* strtok(char* str, const char* delim):
        Breaking string str into a series of tokens separated by delim.
==============================================================================*/
char* e_strtok(char* str, const char* delim) {
  static char* next_str;
  if (str && *str)
    next_str = str;
  else
    str = next_str;                                   // if str = '\0'
  if (str && *str) next_str = e_strpbrk(str, delim);  // -> to any delim char
  if (next_str && *next_str) {  // if it's not end of original string
    *next_str = '\0';
    next_str++;
  }
  if (next_str && !*next_str) str = E_NULL;
  // if several delim chars stand nearby in original string
  if (str && e_strlen(str) == 0) e_strtok(str++, delim);
  return str;
}
