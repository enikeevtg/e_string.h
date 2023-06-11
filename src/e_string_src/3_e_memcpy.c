/**
 * src/e_string/e_memcpy.c
 * (c) T. Enikeev
 * enikeev.tg@gmail.com
 *
 * @brief Copying n characters from src string to dest string.
 * @warning Argument n must be positive and less than or equal to
 * length of src string. Length of dest string must be greater
 * or equal to the n argument.
 * @return Pointer to the dest string without the terminating null
 * character in the end.
 */

#include "../e_string.h"

void* e_memcpy(void* dest, const void* src, e_size_t n) {
  char* ptr_dest = (char*)dest;
  const char* ptr_src = (const char*)src;
  while (n--) *ptr_dest++ = *ptr_src++;
  return dest;
}
