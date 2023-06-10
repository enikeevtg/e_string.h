/**
 * src/e_string/e_itoa.c
 * (c) T. Enikeev
 * enikeev.tg@gmail.com
 * 
 * @brief Internal e_string library function that converts integer to string.
 * It is required for e_strerror() function.
 * @return Pointer to a new static string that contains integer number. 
 */

#include "../internal_strfuncs.h"

char* e_itoa(int c) {
  int n = 1;
  static char strofint[11] = {0};
  int pos = 0;
  if (c < 0) {
    c = -c;
    strofint[pos++] = '-';
  }
  while (c / n && n < INT_MAX / 10) n *= 10;
  if (c / n == 0) n /= 10;
  for (; n; pos++) {
    strofint[pos] = c / n + '0';
    c -= (c / n) * n;
    n /= 10;
  }
  return strofint;
}
