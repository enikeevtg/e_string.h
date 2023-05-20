/*
 *  src/e_string.h
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 *  zeftyrst@student.21-school.ru
 */

#ifndef SRC_COMMON_E_STRING_H_
#define SRC_COMMON_E_STRING_H_

#define E_NULL ((void*)0)
typedef unsigned long int e_size_t;
// #include <stdio.h>

void* e_memchr(const void* str, int c, e_size_t n);            // 1
int e_memcmp(const void* str1, const void* str2, e_size_t n);  // 2

char* e_strcat(char* dest, const char* src);                    // 6
char* e_strncat(char* dest, const char* src, e_size_t n);       // 7
char* e_strchr(const char* str, int c);                         // 8
int e_strcmp(const char* str1, const char* str2);               // 9
int e_strncmp(const char* str1, const char* str2, e_size_t n);  // 10
char* e_strcpy(char* dest, const char* src);                    // 11
char* e_strncpy(char* dest, const char* src, e_size_t n);       // 12
e_size_t e_strcspn(const char* str1, const char* str2);         // 13
e_size_t e_strlen(const char* str);                             // 15

#endif  // SRC_COMMON_E_STRING_H_
