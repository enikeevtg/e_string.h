/*
 *  src/e_string.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 *  zeftyrst@student.21-school.ru
 */

#include "e_string_old.h"

/*==============================================================================
              1. void* memchr(const void* str, int c, size_t n):
    Searching for the first occurrence of the character c (an unsigned char)
      in the first n bytes of the string pointed to, by the argument str.
==============================================================================*/
void* e_memchr(const void* str, int c, e_size_t n) {
  char* ptr = (char*)str;
  for (e_size_t i = 0; i < n && *ptr != c && *ptr; i++) ptr++;
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
  for (e_size_t i = 1; i < n && *ptr1 && *ptr1 == *ptr2; ptr1++, ptr2++) i++;
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
  // FIRST IMPLEMENTATION OF FUNCTION:
  // e_size_t n = e_strlen(src);
  // dest = e_strncat(dest, src, n);

  // SECOND (faster) IMPLEMENTATION OF FUNCTION:
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
  while (*str != c && *str != '\0') str++;
  if (*str == '\0' && c != 0) str = E_NULL;
  return (char*)str;
}

/*==============================================================================
              9. int strcmp(const char* str1, const char* str2):
  Comparing the string pointed to, by str1 to the string pointed to by str2.
==============================================================================*/
int e_strcmp(const char* str1, const char* str2) {
  for (; (*str1) && (*str1 == *str2); str1++) str2++;
  return *str1 - *str2;
}

/*==============================================================================
        10. int strncmp(const char* str1, const char* str2, size_t n):
            Comparing at most the first n bytes of str1 and str2.
==============================================================================*/
int e_strncmp(const char* str1, const char* str2, e_size_t n) {
  for (e_size_t i = 0; (*str1) && (*str1 == *str2) && (i < n); str1++, str2++)
    i++;
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
  return dest;
}

/*==============================================================================
            13. size_t strcspn(const char* str1, const char* str2):
                      Count String Pointers Number (?)
          Calculating the length of the initial segment of str1 which
                consists entirely of characters not in str2.
==============================================================================*/
e_size_t e_strcspn(const char* str1, const char* str2) {
  // FIRST IMPLEMENTATION OF FUNCTION:
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

  // SECOND INMPLEMENTATION OF FUNCTION (look at 16 e_strpbrk() function):
  // return e_strpbrk(str1, str2) - str1;
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

/*==============================================================================
          16. char* strpbrk(const char* str1, const char* str2):
                            Pointer BReaK
        Finding the first character in the string str1 that matches
                    any character specified in str2.
==============================================================================*/
char* e_strpbrk(const char* str1, const char* str2) {
  // FIRST IMPLEMENTATION OF FUNCTION:
  return (char*)str1 + e_strcspn(str1, str2);

  // SECOND IMPLEMENTATION OF FUNCTION (look at 13 e_strcspn() function):
  // char* ptr1 = (char*)str1;
  // int found = 0;
  // char* ptr2 = (char*)str2;
  // while (*ptr1 && !found) {
  //   while (*ptr2 && *ptr2 != *ptr1) ptr2++;
  //   if (*ptr2) {
  //     found = 1;
  //   } else {
  //     ptr1++;
  //     ptr2 = (char*)str2;
  //   }
  // }
  // return ptr1;

  // THIRD IMPLEMENTATION WITH E_STRCHR():
  while (*str1 && !e_strchr(str2, *str1)) str1++;
  return (char*)str1;
}

/*==============================================================================
                17 char* strrchr(const char* str, int c)
          Searching for the last occurrence of the character c
    (an unsigned char) in the string pointed to by the argument str.
==============================================================================*/
char* e_strrchr(const char* str, int c) {
  // FIRST IMPLEMENTATION WITH E_STRCHR() FUNCTION:
  // e_size_t str_len = e_strlen(str);
  // char tmp[str_len + 1];
  // for (e_size_t i = 0; i < str_len; i++) tmp[i] = str[str_len - i - 1];
  // tmp[str_len] = '\0';
  // char* ptr_c = e_strchr(tmp, c);
  // return (char*)str + str_len - (ptr_c - tmp + 1);

  // SECOND IMPLEMENTATION WITHOUT E_STRCHR() FUNCTION:
  char* ptr = (char*)str + e_strlen(str);  // pointer to '\0' of string str
  while (ptr != str - sizeof(char) && *ptr != c) ptr--;
  if (ptr == str - sizeof(char)) ptr = E_NULL;
  return ptr;
}

/*==============================================================================
          18 size_t strspn(const char* str1, const char* str2):
          Calculates the length of the initial segment of str1
              which consists entirely of characters in str2.
==============================================================================*/
// e_size_t e_strspn(const char* str1, const char* str2) {}

/*==============================================================================
          19 char* strstr(const char* haystack, const char* needle):
      Finding the first occurrence of the entire string needle (not including
      the terminating null character) which appears in the string haystack.
==============================================================================*/
char* e_strstr(const char* haystack, const char* needle) {
  char* ptr_chr = e_strchr(haystack, *needle);
  char* ptr_hay = ptr_chr;
  char* ptr_need = (char*)needle;
  if (ptr_chr)
    for (; *ptr_hay == *ptr_need; ptr_hay++) ptr_need++;
  if (*ptr_need && *ptr_hay) ptr_chr = e_strstr(ptr_hay, needle);
  return ptr_chr;
}

/*==============================================================================
              20 char* strtok(char* str, const char* delim):
        Breaking string str into a series of tokens separated by delim.
==============================================================================*/
char* e_strtok(char* str, const char* delim) {
  char* ptr_end = e_strpbrk(str, delim);
  *ptr_end = '\0';
  return str;
}