/**
 * src/e_string/e_insert.c
 * @authors T. Enikeev
 * enikeev.tg@gmail.com
 *
 * @brief Creating a new string in which a specified string (str) is inserted
 * at a specified index position (start_index) in the given string (src).
 * @warning This function uses calloc(), so free() function is required to
 * use by user after calling this function.
 * @return Pointer to a new string in which a specified string (str) is
 * inserted at a specified index position (start_index) in the given string
 * (src). In case of any error function returns E_NULL.
 */

#include "../e_string.h"

void* e_insert(const char* src, const char* str, e_size_t start_index) {
  char* dest = E_NULL;
  if (src && str && e_strlen(src) >= start_index) {
    e_size_t dest_len = e_strlen(src) + e_strlen(str) + 1;
    if (src && str) dest = (char*)calloc(dest_len, sizeof(char));
    if (dest) {
      dest = e_strncat(dest, src, start_index);
      dest = e_strcat(dest, str);
      dest = e_strcat(dest, src + start_index);
    }
  }
  return (void*)dest;
}
