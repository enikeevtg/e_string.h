/**
 * src/e_string/e_memset.c
 * (c) T. Enikeev
 * enikeev.tg@gmail.com
 * 
 * @brief Copying the character c (an unsigned char) to the first n
 * characters of the string pointed to by the argument str.
 * @warning Argument n must be positive and greater than or equal to
 * length of str string.
 * @return Pointer to changed str string with the terminating null
 * character in the end.
 */

#include "../e_string.h"

void* e_memset(void* str, int c, e_size_t n) {
  char* ptr = (char*)str;
  while (n-- && *ptr) *ptr++ = c;
  return str;
}
