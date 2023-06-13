/**
 * src/e_string/e_strpbrk.c
 * @authors T. Enikeev
 * enikeev.tg@gmail.com
 *
 * @brief Finding the first character in the string str1
 * that matches any character specified in str2.
 * @warning str1 and str2 strings must be allocated in memory.
 * @return Pointer to the first character in the string str1
 * that matches any character specified in str2.
 */

#include "../e_string.h"

char* e_strpbrk(const char* str1, const char* str2) {
  while (*str1 && !e_strchr(str2, *str1)) str1++;
  return (*str1) ? (char*)str1 : E_NULL;
}

// ANOTHER WAYS:
// char* e_strpbrk(const char* str1, const char* str2) {
//   char* ptr1 = (char*)str1;
//   int found = 0;
//   char* ptr2 = (char*)str2;
//   while (*ptr1 && !found) {
//     while (*ptr2 && *ptr2 != *ptr1) ptr2++;
//     if (*ptr2) {
//       found = 1;
//     } else {
//       ptr1++;
//       ptr2 = (char*)str2;
//     }
//   }
//   return ptr1;
// }

// IF E_STRCSPN() NOT DEPEND ON E_STRPBRK()
// char* e_strpbrk(const char* str1, const char* str2) {
//   return (char*)str1 + e_strcspn(str1, str2);
// }

// WITH E_NULL CHECKING:
// char *e_strpbrk(const char *str1, const char *str2) {
//   if (str1 && str2) {
//     while (*str1 && !e_strchr(str2, *str1)) str1++;
//     if (!*str1) str1 = E_NULL;
//   } else {
//     str1 = E_NULL;
//   }
//     return (char *)str1;
// }
