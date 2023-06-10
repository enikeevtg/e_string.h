/**
 * src/e_string/e_strlen.c
 * (c) T. Enikeev
 * enikeev.tg@gmail.com
 * 
 * @brief Computing the length of the string str up to 
 * but not including the terminating null character.
 * @return Length of the string str.
 */

#include "../e_string.h"

e_size_t e_strlen(const char* str) {
  e_size_t count = 0;
  while (*str++) count++;
  return count;
}
