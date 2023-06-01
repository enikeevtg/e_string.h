/*
 *  src/e_string/e_memmove.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "../e_string.h"

/*==============================================================================
          4. void* memmove(void* dest, const void* src, size_t n):
          Another function to copy n characters from str2 to str1.
==============================================================================*/
void* e_memmove(void* dest, const void* src, e_size_t n) {
  char* ptr_dest = (char*)dest;
  const char* ptr_src = (const char*)src;
  if (dest > src) {
    while (n--) *(ptr_dest + n) = *(ptr_src + n);
  } else if (dest < src) {
    while (n--) *ptr_dest++ = *ptr_src++;
  }
  return dest;
}
