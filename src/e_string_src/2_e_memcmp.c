/**
 * src/e_string/e_memcmp.c
 * (c) T. Enikeev
 * enikeev.tg@gmail.com
 * 
 * @brief Comparing the first n bytes of two strings.
 * @warning Argument n must be positive and less than or equal to
 * minimum length of strings.
 * @return Differenece between first mismatched symbols in strings
 * or nil if strings are equal.
 */

#include "../e_string.h"

int e_memcmp(const void* str1, const void* str2, e_size_t n) {
  char* ptr1 = (char*)str1;
  char* ptr2 = (char*)str2;
  for (e_size_t i = 1; i < n && *ptr1 && *ptr1 == *ptr2; ptr1++, ptr2++) i++;
  return *ptr1 - *ptr2;
}
