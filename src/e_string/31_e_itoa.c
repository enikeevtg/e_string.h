/*
 *  src/e_string/e_itoa.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "internal_string.h"

/*==============================================================================
                            char* e_itoa(int c):
                  Converting integer to string (direct algorithm)
==============================================================================*/
char* e_itoa(int c) {
  int n = 1;
  static char strofint[22] = {0};
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
