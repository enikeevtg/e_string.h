/**
 * src/e_string/e_strchr.c
 * (c) T. Enikeev
 * enikeev.tg@gmail.com
 *
 * @brief Searching for the first occurrence of the character c
 * (an unsigned char) in the string pointed to, by the argument str.
 * @return Pointer to the first occurrence of the character c
 * in the str string or E_NULL pointer if the str string doesn't contain
 * the character c.
 */

#include "../e_string.h"

char* e_strchr(const char* str, int c) {
  while (*str != c && *str != '\0') str++;
  if (*str == '\0' && c != 0) str = E_NULL;
  return (char*)str;
}
