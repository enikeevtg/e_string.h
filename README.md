# e_string.h

## string.h Types

| Coding Status | No. | Variable | Description |
| ------ | ------ | ------ | ------ |
| ✅ | 1 | size_t | This is the unsigned integral type and is the result of the sizeof keyword. |
	
## string.h Macro

| Coding Status | No. | Macro | Description |
| ------ | ------ | ------ | ------ |
| ✅ | 1 | NULL | This macro is the value of a null pointer constant. |

## string.h Functions

| Coding Status | No. | Function | Description |
| ------ | ------ | ------ | ------ |
| ✅ | 1 | void *memchr(const void *str, int c, size_t n) | Searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument str. |
| ✅ | 2 | int memcmp(const void *str1, const void *str2, size_t n) | Compares the first n bytes of str1 and str2. |
| ✅ | 3 | void *memcpy(void *dest, const void *src, size_t n) | Copies n characters from src to dest. |
| ✅ | 4 | void *memset(void *str, int c, size_t n) | Copies the character c (an unsigned char) to the first n characters of the string pointed to, by the argument str. |
| ✅ | 5 | char *strncat(char *dest, const char *src, size_t n) | Appends the string pointed to, by src to the end of the string pointed to, by dest up to n characters long. |
| ✅ | 6	| char *strchr(const char *str, int c) | Searches for the first occurrence of the character c (an unsigned char) in the string pointed to, by the argument str. |
| ✅ | 7 | int strncmp(const char *str1, const char *str2, size_t n) | Compares at most the first n bytes of str1 and str2. |
| ✅ | 8 | char *strncpy(char *dest, const char *src, size_t n) | Copies up to n characters from the string pointed to, by src to dest. |
| ✅ | 9 | size_t strcspn(const char *str1, const char *str2) | Calculates the length of the initial segment of str1 which consists entirely of characters not in str2. |
| ✅ | 10 | char *strerror(int errnum) | Searches an internal array for the error number errnum and returns a pointer to an error message string. You need to declare macros containing arrays of error messages for mac and linux operating systems. Error descriptions are available in the original library. Checking the current OS is carried out using directives. |
| ✅ | 11 | size_t strlen(const char *str) | Computes the length of the string str up to but not including the terminating null character. |
| 🚩 | 12 | char *strpbrk(const char *str1, const char *str2) | Finds the first character in the string str1 that matches any character specified in str2. |
| 🚩 | 13 | char *strrchr(const char *str, int c) | Searches for the last occurrence of the character c (an unsigned char) in the string pointed to by the argument str. |
| 🚩 | 14 | char *strstr(const char *haystack, const char *needle) | Finds the first occurrence of the entire string needle (not including the terminating null character) which appears in the string haystack. |
| 🚩 | 15 | char *strtok(char *str, const char *delim) | Breaks string str into a series of tokens separated by delim. |

***

## string.h Functions (old list)

| Coding Status | No. | Function | Description |
| ------ | ------ | ------ | ------ |
| ✅ | 1 | void *memchr(const void *str, int c, size_t n) | Searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument str. |
| ✅ | 2 | int memcmp(const void *str1, const void *str2, size_t n) | Compares the first n bytes of str1 and str2. |
| ✅ | 3 | void *memcpy(void *dest, const void *src, size_t n) | Copies n characters from src to dest. |
| ✔️ | 4 | void *memmove(void *dest, const void *src, size_t n) | Another function to copy n characters from str2 to str1. |
| ✅ | 5 | void *memset(void *str, int c, size_t n) | Copies the character c (an unsigned char) to the first n characters of the string pointed to, by the argument str. |
| ✔️ | 6 | char *strcat(char *dest, const char *src) | Appends the string pointed to, by src to the end of the string pointed to by dest. |
| ✅ | 7 | char *strncat(char *dest, const char *src, size_t n) | Appends the string pointed to, by src to the end of the string pointed to, by dest up to n characters long. |
| ✅ | 8	| char *strchr(const char *str, int c) | Searches for the first occurrence of the character c (an unsigned char) in the string pointed to, by the argument str. |
| ✔️ | 9 | int strcmp(const char *str1, const char *str2) | Compares the string pointed to, by str1 to the string pointed to by str2. |
| ✅ | 10 | int strncmp(const char *str1, const char *str2, size_t n) | Compares at most the first n bytes of str1 and str2. |
| ✔️ | 11 | char *strcpy(char *dest, const char *src) | Copies the string pointed to, by src to dest. |
| ✅ | 12 | char *strncpy(char *dest, const char *src, size_t n) | Copies up to n characters from the string pointed to, by src to dest. |
| ✅ | 13 | size_t strcspn(const char *str1, const char *str2) | Calculates the length of the initial segment of str1 which consists entirely of characters not in str2. |
| ✅ | 14 | char *strerror(int errnum) | Searches an internal array for the error number errnum and returns a pointer to an error message string. You need to declare macros containing arrays of error messages for mac and linux operating systems. Error descriptions are available in the original library. Checking the current OS is carried out using directives. |
| ✅ | 15 | size_t strlen(const char *str) | Computes the length of the string str up to but not including the terminating null character. |
| 🚩 | 16 | char *strpbrk(const char *str1, const char *str2) | Finds the first character in the string str1 that matches any character specified in str2. |
| 🚩 | 17 | char *strrchr(const char *str, int c) | Searches for the last occurrence of the character c (an unsigned char) in the string pointed to by the argument str. |
| 🚩✔️ | 18 | size_t strspn(const char *str1, const char *str2) | Calculates the length of the initial segment of str1 which consists entirely of characters in str2. |
| 🚩 | 19 | char *strstr(const char *haystack, const char *needle) | Finds the first occurrence of the entire string needle (not including the terminating null character) which appears in the string haystack. |
| 🚩 | 20 | char *strtok(char *str, const char *delim) | Breaks string str into a series of tokens separated by delim. |
