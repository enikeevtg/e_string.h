/**
 * src/e_string/e_strncpy.c
 * (c) T. Enikeev
 * enikeev.tg@gmail.com
 * 
 * @brief Copying up to n characters from the string pointed to,
 * by src to dest.
 * @warning Argument n must be positive and less than or equal to
 * length of src string. Length of dest string must be greater
 * or equal to the n argument.
 * @return Pointer to the dest string without the terminating null
 * character in the end.
 */

#include "../e_string.h"

char* e_strncpy(char* dest, const char* src, e_size_t n) {
  char* ptr = dest;
  while (n--) *ptr++ = *src++;
  return dest;
}

// ANOTHER WAYS:
  // for (e_size_t i = 0; /* *src && */ i < n; i++) *(dest + i) = *src++;
