/*
 *  e_string.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 *  zeftyrst@student.21-school.ru
 */

#include "e_string.h"
// #include <string.h>

/*===================================================================================
                    6. char* strcat(char* dest, const char* src):
                  Appending the string pointed to, by src to the end
                          of the string pointed to by dest.
===================================================================================*/
char* e_strcat(char* dest, const char* src) {
  // Как отслеживать переполнение массива dest, если пользователь выделил для
  // этого массива недостаточно памяти?
  char* tmp = dest + e_strlen(dest);
  while (*src) *tmp++ = *src++;
  *tmp = '\0';
  return dest;
}

/*===================================================================================
                7. char* strncat(char* dest, const char* src, size_t n):
            Appending the string pointed to, by src to the end of the string
                    pointed to, by dest up to n characters long.
===================================================================================*/
char* e_strncat(char* dest, const char* src, e_size_t n) {
  char* tmp = dest + e_strlen(dest);
  e_size_t count = 0;
  while (*src && count < n) {
    *tmp++ = *src++;
    count++;
  }
  *tmp = '\0';
  return dest;
}

/*===================================================================================
                    8. char* strchr(const char* str, int c):
      Searching for the first occurrence of the character c (an unsigned char)
                in the string pointed to, by the argument str.
===================================================================================*/
char* e_strchr(const char* str, int c) {
  while (c != *str && *str != '\0') str++;
  if (*str == '\0') str = e_NULL;
  return (char*)str;
}

/*===================================================================================
                9. int strcmp(const char* str1, const char* str2):
    Comparing the string pointed to, by str1 to the string pointed to by str2.
===================================================================================*/
int e_strcmp(const char* str1, const char* str2) {
  for (; (*str1) && (*str1 == *str2); str1++, str2++) {
  }
  return *str1 - *str2;
}

/*===================================================================================
          10. int strncmp(const char* str1, const char* str2, size_t n):
              Comparing at most the first n bytes of str1 and str2.
===================================================================================*/
int e_strncmp(const char* str1, const char* str2, e_size_t n) {
  for (e_size_t i = 0; (*str1) && (*str1 == *str2) && (i < n);
       str1++, str2++, i++) {
  }
  return *str1 - *str2;
}

/*===================================================================================
                  11. char* strcpy(char* dest, const char* src):
                  Copying the string pointed to, by src to dest.
===================================================================================*/
char* e_strcpy(char* dest, const char* src) {
  for (e_size_t i = 0; *src; i++) {
    *(dest + i) = *src++;
  }
  return dest;
}

/*===================================================================================
              12. char* strncpy(char* dest, const char* src, size_t n):
        Copying up to n characters from the string pointed to, by src to dest.
===================================================================================*/
char* e_strncpy(char* dest, const char* src, e_size_t n) {
  for (e_size_t i = 0; *src && i < n; i++) {
    *(dest + i) = *src++;
  }
  return dest;
}

/*===================================================================================
                        15. size_t strlen(const char* str):
                    Computes the length of the string str up to
                  but not including the terminating null character.
===================================================================================*/
e_size_t e_strlen(const char* str) {
  e_size_t count = 0;
  while (str[count]) count++;
  return count;
}
