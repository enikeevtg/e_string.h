/*
 *  src/e_string/e_strstr.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "../e_string.h"

/*==============================================================================
          14 char* strstr(const char* haystack, const char* needle):
      Finding the first occurrence of the entire string needle (not including
      the terminating null character) which appears in the string haystack.
==============================================================================*/
char* e_strstr(const char* haystack, const char* needle) {
  char* ptr_chr = e_strchr(haystack, *needle);
  char* ptr_hay = ptr_chr;
  char* ptr_need = (char*)needle;
  if (ptr_chr)
    for (; *ptr_need && *ptr_hay == *ptr_need; ptr_hay++) ptr_need++;
  if (*ptr_need && *ptr_hay) ptr_chr = e_strstr(ptr_hay, needle);
  return ptr_chr;
}
