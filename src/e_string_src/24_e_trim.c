/**
 * src/e_string/e_trim.c
 * (c) T. Enikeev
 * enikeev.tg@gmail.com
 *
 * @brief Creating a new string in which all leading and trailing occurrences
 * of a set of specified characters (trim_chars) from the given string (src)
 * are removed.
 * @warning This function uses calloc(), so free() function is required to
 * use by user after calling this function.
 * @return Pointer to a new string in which all leading and trailing
 * occurrences of a set of specified characters (trim_chars) from the given
 * string (src) was removed. In case of any error function returns E_NULL.
 */

#include "../e_string.h"

void* e_trim(const char* src, const char* trim_chars) {
  char *dest = E_NULL;
  if (!trim_chars || !*trim_chars) {
    char default_trims[] = " \t\n";
    trim_chars = default_trims;
  }
  if (src) {
    if (*src) {
      char *ptr_left = (char *)src;
      char *ptr_right = (char *)src + e_strlen(src) - 1;
      while (*ptr_left && e_strchr(trim_chars, *ptr_left)) ptr_left++;
      // if entire src string contains trim_chars characters:
      if (!*ptr_left) ptr_right = ptr_left;  // so next cycle won't be launched
      while (*ptr_right && e_strchr(trim_chars, *ptr_right)) ptr_right--;
      dest = (char *)calloc(ptr_right - ptr_left + 2, sizeof(char));
      if (dest) dest = e_strncat(dest, ptr_left, ptr_right - ptr_left + 1);
    } else {
      dest = (char *)calloc(1, sizeof(char));
    }
  }
  return (void *)dest;
}
