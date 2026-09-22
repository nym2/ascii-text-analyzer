#include "analyzer.h"

#include <ctype.h>
#include <stdio.h>
#include <string.h>

size_t count_letters(const char *text)
{
    size_t count = 0;

    for (size_t i = 0; text[i] != '\0'; i++)
    {
        if (isalpha((unsigned char)text[i]))
        {
            count++;
        }
    }

    return count;
}

size_t count_characters(const char *text)
{
    return strlen(text);
}