/*
 *  src/e_string/e_to_upper.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "../e_string.h"

/*==============================================================================
                    1 void* to_upper(const char* str):
          Returning a copy of string (str) converted to uppercase.
                  In case of any error, returning NULL
==============================================================================*/
void* e_to_upper(const char* str) {
  // Common function change_registr(str, mode)
  // mode = 1 -> convert to uppercase
  return change_registr(str, 1);
}
