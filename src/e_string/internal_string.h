/*
 *  src/e_string.h
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#ifndef SRC_E_STRING_INTERNAL_STRING_H_
#define SRC_E_STRING_INTERNAL_STRING_H_

#include "../e_string.h"

char* e_strcpy(char* dest, const char* src);
char* e_strcat(char* dest, const char* src);
char* e_itoa(int c);
void* change_registr(const char* str, int mode);  // for e_to_upper/lower()

#endif  // SRC_E_STRING_INTERNAL_STRING_H_
