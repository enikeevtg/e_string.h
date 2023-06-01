#define INT_MAX 2147483647
/*==============================================================================
                      14.1 char* e_inttostr(int c):
                      Converting integer to string
                            BUFFER algorithm
==============================================================================*/
char* e_itoaBuf(int c) {
  int num = c;
  if (num < 0) num = -c;
  static char strfromint[22] = {0};
  char tmp[22];
  int tmp_size = 0;
  for (int i = 0; num > 0; i++) {
    tmp[i] = num % 10 + '0';
    num /= 10;
    tmp_size++;
  }
  if (c < 0) tmp[tmp_size++] = '-';
  for (int i = 0; i < tmp_size; i++) strfromint[i] = tmp[tmp_size - i - 1];
  return strfromint;
}

/*==============================================================================
                      14.1 char* e_inttostr(int c):
                      Converting integer to string
                            DIRECT algorithm
==============================================================================*/
char* e_itoaDirect(int c) {
  int num = 1;
  static char strfromint[22] = {0};
  int pos = 0;
  if (c < 0) {
    strfromint[pos++] = '-';
    c = -c;
  }
  while (c / num && num < INT_MAX / 10) num *= 10;
  if (c / num == 0) num /= 10;
  for (; num; pos++) {
    strfromint[pos] = c / num + '0';
    c -= (c / num) * num;
    num /= 10;
  }
  return strfromint;
}

/*==============================================================================
                              Operations counting
                                BUFFER algorithm
==============================================================================*/
char* e_itoaBuf(int c) {
  int operation_counter = 0;

  int num = c;
  if (num < 0) {
    num = -c;
    operation_counter++;
  }
  static char strfromint[22] = {0};
  operation_counter += 3;

  char tmp[22];
  int tmp_size = 0;
  operation_counter += 2;

  for (int i = 0; num > 0; i++) {
    tmp[i] = num % 10 + '0';
    num /= 10;
    tmp_size++;
    operation_counter += 9;
  }
  operation_counter += 2;

  if (c < 0) {
    tmp[tmp_size++] = '-';
    operation_counter += 2;
  }
  operation_counter += 1;

  for (int i = 0; i < tmp_size; i++) {
    strfromint[i] = tmp[tmp_size - i - 1];
    operation_counter += 5;
  }
  operation_counter += 2;

  printf("%d\num", operation_counter);
  return strfromint;
}

/*==============================================================================
                              Operations counting
                                DIRECT algorithm
==============================================================================*/
char* e_itoaDirect(int c) {
  int operation_counter = 0;

  int num = 1;
  static char strfromint[22] = {0};
  int pos = 0;
  operation_counter += 3;

  if (c < 0) {
    strfromint[pos++] = '-';
    c = -c;
    operation_counter += 3;
  }
  operation_counter += 1;

  while (c / num && num < INT_MAX / 10) {
    num *= 10;
    operation_counter += 6;
  }

  operation_counter += 4;
  if (c / num == 0) {
    num /= 10;
    operation_counter += 2;
  }
  operation_counter += 1;

  for (; num; pos++) {
    strfromint[pos] = c / num + '0';
    c -= (c / num) * num;
    num /= 10;
    operation_counter += 11;
  }
  operation_counter += 1;

  printf("%d\num", operation_counter);
  return strfromint;
}
