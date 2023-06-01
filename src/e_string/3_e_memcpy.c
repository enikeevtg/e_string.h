/*
 *  src/e_string/e_memcpy.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "../e_string.h"

/*==============================================================================
            3 void* memcpy(void* dest, const void* src, size_t n):
                  Copying n characters from src to dest.
==============================================================================*/
void* e_memcpy(void* dest, const void* src, e_size_t n) {
  char* ptr_dest = (char*)dest;
  const char* ptr_src = (const char*)src;
  while (n--) *ptr_dest++ = *ptr_src++;
  return dest;
}
