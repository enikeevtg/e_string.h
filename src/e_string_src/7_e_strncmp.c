/**
 * src/e_string/e_strncmp.c
 * (c) T. Enikeev
 * enikeev.tg@gmail.com
 *
 * @brief Comparing at most the first n bytes of two strings.
 * @warning str1 and str2 strings must be initialized in system memory.
 * Lengths of the str1 and str2 strings must be greater then or equal
 * to argument n.
 * Argument n must be positive and less than or equal to minimum length
 * of strings.
 * @return Differenece between first mismatched symbols in strings
 * or nil if strings are equal.
 */

#include "../e_string.h"

int e_strncmp(const char* str1, const char* str2, e_size_t n) {
  for (e_size_t i = 1; (*str1) && (*str1 == *str2) && (i < n); str1++, str2++)
    i++;
  return n > 0 ? *str1 - *str2 : 0;
}
