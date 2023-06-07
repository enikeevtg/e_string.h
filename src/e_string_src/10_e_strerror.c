/*
 *  src/e_string/e_strerror.c
 *  (c) T. Enikeev
 *  enikeev.tg@gmail.com
 */

#include "../e_string.h"

/*==============================================================================
                      10 char* strerror(int errnum):
      Searching an internal array for the error number errnum and returns
  a pointer to an error message string. You need to declare macros containing
        arrays of error messages for mac and linux operating systems.
          Error descriptions are available in the original library.
          Checking the current OS is carried out using directives.
==============================================================================*/
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
