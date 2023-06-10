/**
 * src/e_string/e_strcmp.c
 * (c) T. Enikeev
 * enikeev.tg@gmail.com
 * 
 * @brief Comparing the string pointed to, by str1 to the string
 * pointed to by str2.
 * @return Differenece between first mismatched symbols in strings
 * or nil if strings are equal.
 */

#include "../e_string.h"

int e_strcmp(const char* str1, const char* str2) {
  for (; (*str1) && (*str1 == *str2); str1++) str2++;
  return *str1 - *str2;
}
