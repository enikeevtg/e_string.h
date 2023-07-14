/**
 * src/e_string/e_to_upper.c
 * @authors T. Enikeev
 * enikeev.tg@gmail.com
 *
 * @brief Creating a copy of string str converted to uppercase on the heap.
 * @warning This function uses calloc(), so free() function is required to
 * use by user after calling this function.
 * @return Pointer to a copy of string str converted to uppercase.
 * In case of any error function returns E_NULL.
 */

#include "../e_string.h"

void* e_to_upper(const char* str) {
  // Common function change_registr(str, mode)
  // mode = 1 -> convert to uppercase
  return change_registr(str, 1);
}
