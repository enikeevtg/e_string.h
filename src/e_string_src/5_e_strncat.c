/**
 * src/e_string/e_strncat.c
 * (c) T. Enikeev
 * enikeev.tg@gmail.com
 * 
 * @brief Appending the string pointed to, by src to the end
 * of the string pointed to, by dest up to n characters long.
 * @warning Argument n must be positive and greater than or equal to
 * length of str string. Length of dest string must allow to add
 * n characters from the src string.
 * @return Pointer to increased dest string with the terminating null
 * character in the end.
 */

#include "../e_string.h"

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
