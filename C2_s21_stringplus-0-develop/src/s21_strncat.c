#include "s21_string.h"

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  // dest – указатель на массив в который будет добавлена строка.
  // src – указатель на массив из которого будет скопирована строка.
  // n – максимальная длина добавляемой строки.
  s21_size_t dest_len = s21_strlen(dest);
  s21_size_t i = 0;

  for (; i < n && src[i]; i++) {
    dest[dest_len + i] = src[i];
  }

  dest[dest_len + i] = '\0';

  return dest;
}
