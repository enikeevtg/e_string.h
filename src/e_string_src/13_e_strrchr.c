/**
 * src/e_string/e_strrchr.c
 * (c) T. Enikeev
 * enikeev.tg@gmail.com
 *
 * @brief Searching for the last occurrence of the character c
 * (an unsigned char) in the string pointed to by the argument str.
 * @return Pointer to the last occurrence of the character c
 * in the str string or E_NULL pointer if the str string doesn't
 * contain the character c.
 */

#include "../e_string.h"

char* e_strrchr(const char* str, int c) {
  char* ptr = (char*)str + e_strlen(str);  // pointer to '\0' of string str
  while (ptr != str - sizeof(char) && *ptr != c) ptr--;
  if (ptr == str - sizeof(char)) ptr = E_NULL;
  return ptr;
}

// ANOTHER WAYS:
// char* e_strrchr(const char* str, int c) {
//   e_size_t str_len = e_strlen(str);
//   char tmp[str_len + 1];
//   for (e_size_t i = 0; i < str_len; i++) tmp[i] = str[str_len - i - 1];
//   tmp[str_len] = '\0';
//   char* ptr_c = e_strchr(tmp, c);
//   return (char*)str + str_len - (ptr_c - tmp + 1);
// }
