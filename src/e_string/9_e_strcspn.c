/*
 *  src/e_string/e_strcspn.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "../e_string.h"

/*==============================================================================
            9 size_t strcspn(const char* str1, const char* str2):
                    Count String Pointers Number (?)
          Calculating the length of the initial segment of str1 which
                consists entirely of characters not in str2.
==============================================================================*/
e_size_t e_strcspn(const char* str1, const char* str2) {
  char* ptr = e_strpbrk(str1, str2);
  return ptr ? (e_size_t)(ptr - str1) : e_strlen(str1);
}

// ANOTHER WAYS:
// e_size_t e_strcspn(const char* str1, const char* str2) {
//   const char* ptr1 = str1;
//   int found = 0;
//   while (*ptr1 && !found) {
//     const char* ptr2 = str2;
//     while (*ptr2 && *ptr2 != *ptr1) ptr2++;
//     if (!*ptr2)
//       ptr1++;
//     else
//       found = 1;
//   }
//   return ptr1 - str1;
// }
