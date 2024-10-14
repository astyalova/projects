#include "s21_string.h"

char *s21_strchr(const char *str, int c) {
  // str – указатель на строку, в которой будет осуществляться поиск.
  // c – код искомого символа.
  do {
    if (*str == c) {
      return (char *)str;
    }
  } while (*str++);
  return 0;
}
