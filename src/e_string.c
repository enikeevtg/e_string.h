/*
 *  src/e_string.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 *  zeftyrst@student.21-school.ru
 */

#include "e_string.h"

// #include <string.h>

/*==============================================================================
              1. void* memchr(const void* str, int c, size_t n):
    Searching for the first occurrence of the character c (an unsigned char)
      in the first n bytes of the string pointed to, by the argument str.
==============================================================================*/
void* e_memchr(const void* str, int c, e_size_t n) {
  char* ptr = (char*)str;
  char ch = (char)c;
  for (e_size_t i = 0; i < n && ch != *ptr && *ptr; i++) ptr++;
  if (ptr == str + n) ptr = E_NULL;
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
                6. char* strcat(char* dest, const char* src):
              Appending the string pointed to, by src to the end
                      of the string pointed to by dest.
==============================================================================*/
char* e_strcat(char* dest, const char* src) {
  // Как отслеживать переполнение массива dest, если пользователь выделил для
  // этого массива недостаточно памяти?

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
                    15. size_t strlen(const char* str):
                Computes the length of the string str up to
              but not including the terminating null character.
==============================================================================*/
e_size_t e_strlen(const char* str) {
  e_size_t count = 0;
  while (*str++) count++;
  return count;
}
