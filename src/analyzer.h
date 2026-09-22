#ifndef ANALYZER_H
#define ANALYZER_H

#include <stddef.h>

size_t count_characters(const char *text);
size_t count_letters(const char *text);
size_t count_digits(const char *text);
size_t count_spaces(const char *text);
size_t count_special_characters(const char *text);
size_t count_uppercase(const char *text);
size_t count_lowercase(const char *text);

void print_character_frequencies(const char *text);
void print_ascii_values(const char *text);

#endif