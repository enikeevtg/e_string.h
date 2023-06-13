/**
 * src/e_string/e_strstr.c
 * @authors T. Enikeev
 * enikeev.tg@gmail.com
 *
 * @brief Finding the first occurrence of the entire string needle
 * (not including the terminating null character) which appears
 * in the string haystack.
 * @warning haystack and needle strings must be initialized in system memory.
 * @return Pointer to first occurrence of the entire string needle
 * which appears in the string haystack.
 * If the haystack string doesn't contain the entire needle string
 * then the pointer points to terminating null character.
 */

#include "../e_string.h"

char* e_strstr(const char* haystack, const char* needle) {
  if (*needle) {
    int found = 0;
    e_size_t hay_len = e_strlen(haystack);
    e_size_t nee_len = e_strlen(needle);
    while (hay_len-- >= nee_len && !found) {
      found = !e_strncmp(haystack, needle, nee_len);
      if(!found) haystack++;
    }
    if (!found) haystack = E_NULL;
  }
  return (char*)haystack;
}


// WAY WITH RECURSION IS FALSE LOGIG WAY BECAUSE strstr(AJAJAXA, AJAXA)
// char* e_strstr(const char* haystack, const char* needle) {
//   char* ptr_chr = e_strchr(haystack, *needle);
//   char* ptr_hay = ptr_chr;
//   char* ptr_need = (char*)needle;
//   if (ptr_chr) {
//     for (; *ptr_need && *ptr_hay == *ptr_need; ptr_hay++) ptr_need++;
//     if (*ptr_need) ptr_chr = e_strstr(ptr_hay, needle);
//   }
//   return ptr_chr;
// }
