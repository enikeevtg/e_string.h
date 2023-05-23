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
void* e_memmove(void* dest, const void* src, e_size_t n);       // 4
void* e_memset(void* str, int c, e_size_t n);                   // 5
char* e_strcat(char* dest, const char* src);                    // 6
char* e_strncat(char* dest, const char* src, e_size_t n);       // 7
char* e_strchr(const char* str, int c);                         // 8
int e_strcmp(const char* str1, const char* str2);               // 9
int e_strncmp(const char* str1, const char* str2, e_size_t n);  // 10
char* e_strcpy(char* dest, const char* src);                    // 11  need test
char* e_strncpy(char* dest, const char* src, e_size_t n);       // 12  need test
e_size_t e_strcspn(const char* str1, const char* str2);         // 13
char* e_strerror(int errnum);
e_size_t e_strlen(const char* str);  // 15

char* e_inttostr(int c);

#endif  // SRC_E_STRING_H_
