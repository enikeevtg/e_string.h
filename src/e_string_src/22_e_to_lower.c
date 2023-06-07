/*
 *  src/e_string/e_to_lower.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "../e_string.h"

/*==============================================================================
                    2 void* to_lower(const char* str):
          Returning a copy of string (str) converted to lowercase.
                  In case of any error, returning NULL
==============================================================================*/
void* e_to_lower(const char* str) {
  // Common function change_registr(str, mode)
  // mode = -1 -> convert to lowercase
  return change_registr(str, -1);
}
