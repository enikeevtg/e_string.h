/**
 * src/e_string/e_strtok.c
 * (c) T. Enikeev
 * enikeev.tg@gmail.com
 * 
 * @brief Breaking string str into a series of tokens separated by delim.
 * @return Pointer to the changed str string if str is not E_NULL pointer.
 * In another case pointer to next token of original string will be returned.
 * Delim characters in the str string are replaced by terminating null
 * character.
 */

#include "../e_string.h"

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
  // if several delim characters stand nearby in original string
  if (str && e_strlen(str) == 0) e_strtok(str++, delim);
  return str;
}
