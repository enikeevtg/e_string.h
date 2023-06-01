/*
 *  src/e_string/e_strlen.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "../e_string.h"

/*==============================================================================
                    11 size_t strlen(const char* str):
                Computes the length of the string str up to
              but not including the terminating null character.
==============================================================================*/
e_size_t e_strlen(const char* str) {
  e_size_t count = 0;
  while (*str++) count++;
  return count;
}
