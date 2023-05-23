/*
 *  src/e_string.h
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 *  zeftyrst@student.21-school.ru
 */

#ifndef SRC_E_STRING_H_
#define SRC_E_STRING_H_

#include <stdio.h>

#include "e_errmsg_list.h"

#define E_NULL ((void*)0)
#define INT_MAX 2147483647
typedef unsigned long int e_size_t;

void* e_memchr(const void* str, int c, e_size_t n);             // 1
int e_memcmp(const void* str1, const void* str2, e_size_t n);   // 2
void* e_memcpy(void* dest, const void* src, e_size_t n);        // 3
void* e_memset(void* str, int c, e_size_t n);                   // 4
char* e_strncat(char* dest, const char* src, e_size_t n);       // 5
char* e_strchr(const char* str, int c);                         // 6
int e_strncmp(const char* str1, const char* str2, e_size_t n);  // 7
char* e_strncpy(char* dest, const char* src, e_size_t n);       // 8  need test
e_size_t e_strcspn(const char* str1, const char* str2);         // 9
char* e_strerror(int errnum);                                   // 10
char* e_inttostr(int c);                                        // 10.1
e_size_t e_strlen(const char* str);                             // 11
char* e_strpbrk(const char* str1, const char* str2);            // 12
char* e_strrchr(const char* str, int c);                        // 13

//---------------------------ADDITIONAL-FUNCTIONS-------------------------------
char* e_strcpy(char* dest, const char* src);
char* e_strcat(char* dest, const char* src);

#endif  // SRC_E_STRING_H_
