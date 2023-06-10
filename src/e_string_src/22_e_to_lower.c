/**
 * src/e_string/e_to_lower.c
 * (c) T. Enikeev
 * enikeev.tg@gmail.com
 * 
 * @brief Creating a copy of string str converted to lowercase on the heap.
 * @warning This function uses calloc(), so free() function is required to
 * use by user after calling this function.
 * @return Pointer to a copy of string str converted to lowercase.
 * In case of any error function returns E_NULL.
 */

#include "../e_string.h"

void* e_to_lower(const char* str) {
  // Common function change_registr(str, mode)
  // mode = -1 -> convert to lowercase
  return change_registr(str, -1);
}
