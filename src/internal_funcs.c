/**
 * src/e_string/internal_string.c
 * @authors T. Enikeev
 * enikeev.tg@gmail.com
 *
 * @brief Internal e_string library functions. change_registr() function is
 * required
 * for e_upper() and e_lower() functions.
 */

#include "../internal_strfuncs.h"

/*==============================================================================
                  char* strcpy(char* dest, const char* src):
                Copying the string pointed to, by src to dest.
==============================================================================*/
char* e_strcpy(char* dest, const char* src) {
  char* ptr = dest;
  while (*src) *ptr++ = *src++;
  *ptr = '\0';
  return dest;
}

/*==============================================================================
                  char* strcat(char* dest, const char* src):
              Appending the string pointed to, by src to the end
                      of the string pointed to by dest.
==============================================================================*/
char* e_strcat(char* dest, const char* src) {
  char* tmp = dest + e_strlen(dest);
  while (*src) *tmp++ = *src++;
  *tmp = '\0';
  return dest;
}

/*==============================================================================
                void* change_registr(const char* str, int mode):
      Returning a copy of string (str) changed chars registr depend on mode:
                      (mode == -1) is "STR" -> "str"
                      (mode == +1) is "str" -> "STR"
                  In case of any error, returning NULL
==============================================================================*/
void* change_registr(const char* str, int mode) {
  char* res = E_NULL;
  if (str) res = (char*)calloc(e_strlen(str) + 1, sizeof(char));
  if (res) {
    res = e_strcpy(res, str);
    char* ptr = res;
    for (; *ptr; ptr++) {
      if (96 < *ptr && *ptr < 123 && mode == 1) *ptr -= 'a' - 'A';  // a -> A
      if (64 < *ptr && *ptr < 91 && mode == -1) *ptr -= 'A' - 'a';  // A -> a
    }
  }
  return (void*)res;
}

// ANOTHER WAY WITH STATIC VARIABLE:
// void* change_registr(const char* str, int mode) {
//   static char res[1024];
//   if (str) {
//     e_strcpy(res, str);
//     char* ptr = res;
//     for (; *ptr; ptr++) {
//       if (96 < *ptr && *ptr < 123 && mode == 1) *ptr -= 'a' - 'A';  // a -> A
//       if (64 < *ptr && *ptr < 91 && mode == -1) *ptr -= 'A' - 'a';  // A -> a
//     }
//   }
//   return (void*)res;
// }
