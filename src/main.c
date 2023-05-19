#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "e_string.h"

int main() {
  // char src[6] = "_src_";
  // char dest_s21[80] = "_dest_";
  // strncat(dest_s21, "ertydhfrty", 11);
  // printf("dest_s21: %s\n\n", dest_s21);
  // return 0;
  char* str = (char*)calloc(1, sizeof(char));

  strcat(str, "Techie ");
  strcat(str, "Delight ");
  strcat(str, "– ");
  strcat(str, "Ace ");
  strcat(str, "the ");
  strcat(str, "Technical ");
  strcat(str, "Interviews");

  // e_strcat(str, "Techie ");
  // e_strcat(str, "Delight ");
  // e_strcat(str, "– ");
  // e_strcat(str, "Ace ");
  // e_strcat(str, "the ");
  // e_strcat(str, "Technical ");
  // e_strcat(str, "Interviews");

  puts(str);

  return 0;
}
