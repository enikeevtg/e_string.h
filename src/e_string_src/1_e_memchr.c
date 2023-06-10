/**
 * src/e_string/e_memchr.c
 * (c) T. Enikeev
 * enikeev.tg@gmail.com
 * 
 * @brief Searching for the first occurrence of the character c
 * (an unsigned char) in the first n bytes of the string pointed to,
 * by the argument str.
 * @warning Argument n must be positive and less than or equal to
 * length of string.
 * @return Pointer to the first occurrence of the character c
 * in the first n bytes of the str string or E_NULL pointer
 * if the str string doesn't contain the character c.
 */

#include "../e_string.h"

void* e_memchr(const void* str, int c, e_size_t n) {
  char* ptr = (char*)str;
  for (e_size_t i = 0; i < n && *ptr != c && *ptr; i++) ptr++;
  if (ptr == (char*)str + n) ptr = E_NULL;
  return (void*)ptr;
}
