/**
 * src/e_string/e_strerror.c
 * (c) T. Enikeev
 * enikeev.tg@gmail.com
 *
 * @brief Searching an internal array for the error number errnum.
 * Array of error messages depends on operating systems
 * (mac or linux). Arrays are placed in e_errmsg_list.h file.
 * @return Pointer to an error message string.
 */

#include "../e_string.h"

char* e_strerror(int errnum) {
  static char errmsg[STRERR_MAX];
  if (errnum < 0 || errnum >= ERR_NUM) {
    UNKNOWN;  // WHY DOES IT WORK? "\_(o_o)_/"
    e_strcpy(errmsg, unknown);
    e_strcat(errmsg, e_inttostr(errnum));
  } else {
    ERRORLIST;  // WHY DOES IT WORK? "\_(o_o)_/"
    e_strcpy(errmsg, e_errmsg_list[errnum]);
  }
  return errmsg;
}
