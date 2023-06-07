/*
 *  src/e_string/e_insert.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "../e_string.h"

/*==============================================================================
      3. void* insert(const char* src, const char* str, size_t start_index):
    Returning a new string in which a specified string (str) is inserted at a
        specified index position (start_index) in the given string (src).
                    In case of any error, returning NULL
==============================================================================*/
void* e_insert(const char* src, const char* str, e_size_t start_index) {
  char* dest = E_NULL;
  e_size_t dest_len = e_strlen(src) + e_strlen(str) + 1;
  if (src && str) dest = (char*)calloc(dest_len, sizeof(char));
  if (dest) {
    dest = e_strncat(dest, src, start_index);
    dest = e_strcat(dest, str);
    dest = e_strcat(dest, src + start_index);
  }
  return (void*)dest;
}
