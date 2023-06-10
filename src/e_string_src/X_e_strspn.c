/**
 * src/e_string/e_strspn.c
 * (c) T. Enikeev
 * enikeev.tg@gmail.com
 * 
 * @brief Calculating the length of the initial segment of str1
 * which consists entirely of characters in str2.
 * @return Length of initial segment of str1 which consists
 * entirely of characters not in str2.
 */

#include "../e_string.h"

e_size_t e_strspn(const char* str1, const char* str2) {
  e_size_t str = e_strlen(str2) - e_strlen(str1);
  return str;
}
