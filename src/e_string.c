/*
 *  src/e_string.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 *  zeftyrst@student.21-school.ru
 */

#include "e_string.h"

/*==============================================================================
              1. void* memchr(const void* str, int c, size_t n):
    Searching for the first occurrence of the character c (an unsigned char)
      in the first n bytes of the string pointed to, by the argument str.
==============================================================================*/
void* e_memchr(const void* str, int c, e_size_t n) {
  char* ptr = (char*)str;
  char ch = (char)c;
  for (e_size_t i = 0; i < n && ch != *ptr && *ptr; i++) ptr++;
  if (ptr == (char*)str + n) ptr = E_NULL;
  return (void*)ptr;
}

/*==============================================================================
        2. int memcmp(const void* str1, const void* str2, size_t n):
              Comparing the first n bytes of str1 and str2.
==============================================================================*/
int e_memcmp(const void* str1, const void* str2, e_size_t n) {
  char* ptr1 = (char*)str1;
  char* ptr2 = (char*)str2;
  for (e_size_t i = 1; i < n && (*ptr1) && (*ptr1 == *ptr2);
       ptr1++, ptr2++, i++) {
  }
  return *ptr1 - *ptr2;
}

/*==============================================================================
            3. void* memcpy(void* dest, const void* src, size_t n):
                  Copying n characters from src to dest.
==============================================================================*/
void* e_memcpy(void* dest, const void* src, e_size_t n) {
  char* ptr_dest = (char*)dest;
  const char* ptr_src = (const char*)src;
  while (n--) *ptr_dest++ = *ptr_src++;
  return dest;
}

/*==============================================================================
          4. void* memmove(void* dest, const void* src, size_t n):
          Another function to copy n characters from str2 to str1.
==============================================================================*/
void* e_memmove(void* dest, const void* src, e_size_t n) {
  char* ptr_dest = (char*)dest;
  const char* ptr_src = (const char*)src;
  if (dest > src) {
    while (n--) *(ptr_dest + n) = *(ptr_src + n);
  } else if (dest < src) {
    while (n--) *ptr_dest++ = *ptr_src++;
  }
  return dest;
}

/*==============================================================================
                5. void* memset(void* str, int c, size_t n):
          Copying the character c (an unsigned char) to the first n
          characters of the string pointed to, by the argument str.
==============================================================================*/
void* e_memset(void* str, int c, e_size_t n) {
  char* ptr = (char*)str;
  while (n-- && *ptr) *ptr++ = c;
  if (!*ptr) {
    *ptr++ = c;
    *ptr++ = '\n';
    *ptr++ = '\0';
  }  // hardcode "\_(o_o)_/"
  return str;
}

/*==============================================================================
                6. char* strcat(char* dest, const char* src):
              Appending the string pointed to, by src to the end
                      of the string pointed to by dest.
==============================================================================*/
char* e_strcat(char* dest, const char* src) {
  // One realisation of function:
  // e_size_t n = e_strlen(src);
  // dest = e_strncat(dest, src, n);

  // Second (faster) realisation of function:
  char* tmp = dest + e_strlen(dest);
  while (*src) *tmp++ = *src++;
  *tmp = '\0';
  return dest;
}

/*==============================================================================
            7. char* strncat(char* dest, const char* src, size_t n):
        Appending the string pointed to, by src to the end of the string
                pointed to, by dest up to n characters long.
==============================================================================*/
char* e_strncat(char* dest, const char* src, e_size_t n) {
  char* tmp = dest + e_strlen(dest);
  while (*src && n--) *tmp++ = *src++;
  *tmp = '\0';
  return dest;
}

/*==============================================================================
                  8. char* strchr(const char* str, int c):
    Searching for the first occurrence of the character c (an unsigned char)
                in the string pointed to, by the argument str.
==============================================================================*/
char* e_strchr(const char* str, int c) {
  while (c != *str && *str != '\0') str++;
  if (*str == '\0') str = E_NULL;
  return (char*)str;
}

/*==============================================================================
              9. int strcmp(const char* str1, const char* str2):
  Comparing the string pointed to, by str1 to the string pointed to by str2.
==============================================================================*/
int e_strcmp(const char* str1, const char* str2) {
  for (; (*str1) && (*str1 == *str2); str1++, str2++) {
  }
  return *str1 - *str2;
}

/*==============================================================================
        10. int strncmp(const char* str1, const char* str2, size_t n):
            Comparing at most the first n bytes of str1 and str2.
==============================================================================*/
int e_strncmp(const char* str1, const char* str2, e_size_t n) {
  for (e_size_t i = 0; (*str1) && (*str1 == *str2) && (i < n);
       str1++, str2++, i++) {
  }
  return *str1 - *str2;
}

/*==============================================================================
                11. char* strcpy(char* dest, const char* src):
                Copying the string pointed to, by src to dest.
==============================================================================*/
char* e_strcpy(char* dest, const char* src) {
  char* ptr = dest;
  while (*src) *ptr++ = *src++;
  *ptr = '\0';
  return dest;
}

/*==============================================================================
          12. char* strncpy(char* dest, const char* src, size_t n):
    Copying up to n characters from the string pointed to, by src to dest.
==============================================================================*/
char* e_strncpy(char* dest, const char* src, e_size_t n) {
  // for (e_size_t i = 0; /* *src && */ i < n; i++) *(dest + i) = *src++;
  char* ptr = dest;
  while (n--) *ptr++ = *src++;
  *ptr = '\0';
  return dest;
}

/*==============================================================================
            13. size_t strcspn(const char* str1, const char* str2):
          Calculating the length of the initial segment of str1 which
                consists entirely of characters not in str2.
==============================================================================*/
e_size_t e_strcspn(const char* str1, const char* str2) {
  const char* ptr1 = str1;
  int found = 0;
  while (*ptr1 && !found) {
    const char* ptr2 = str2;
    while (*ptr2 && *ptr2 != *ptr1) ptr2++;
    if (!*ptr2)
      ptr1++;
    else
      found = 1;
  }
  return ptr1 - str1;
}

/*==============================================================================
                      14. char* strerror(int errnum):
      Searching an internal array for the error number errnum and returns
  a pointer to an error message string. You need to declare macros containing
        arrays of error messages for mac and linux operating systems.
          Error descriptions are available in the original library.
          Checking the current OS is carried out using directives.
==============================================================================*/
char* e_strerror(int errnum) {
  // "Unknown error: errnum"
  static char errmsg[STRERR_MAX];
  if (errnum < 0 || errnum >= ERR_NUM) {
    e_strcpy(errmsg, "Unknown error: ");
    e_strcat(errmsg, e_inttostr(errnum));
  } else {
    ERRORLIST;  // WHY DOES IT WORK? "\_(o_o)_/"
    e_strcpy(errmsg, e_errmsg_list[errnum]);
  }
  return errmsg;
}

/*==============================================================================
                          14.1 char* e_inttostr(int c):
                          Converting integer to string
                              (direct algorithm)
==============================================================================*/
char* e_inttostr(int c) {
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

// int e_strtoint(const char* str) {

//   return ;
// }

/*==============================================================================
                    15. size_t strlen(const char* str):
                Computes the length of the string str up to
              but not including the terminating null character.
==============================================================================*/
e_size_t e_strlen(const char* str) {
  e_size_t count = 0;
  while (*str++) count++;
  return count;
}
