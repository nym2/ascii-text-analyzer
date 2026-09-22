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

size_t count_digits(const char *text)
{
    size_t count = 0;

    for (size_t i = 0; text[i] != '\0'; i++)
    {
        if (isdigit((unsigned char)text[i]))
        {
            count++;
        }
    }

    return count;
}

size_t count_spaces(const char *text)
{
    size_t count = 0;

    for (size_t i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            count++;
        }
    }

    return count;
}

size_t count_uppercase(const char *text)
{
    size_t count = 0;

    for (size_t i = 0; text[i] != '\0'; i++)
    {
        if (isupper((unsigned char)text[i]))
        {
            count++;
        }
    }

    return count;
}

size_t count_lowercase(const char *text)
{
    size_t count = 0;

    for(size_t i = 0; text[i] != '\0'; i++)
    {
        if(islower((unsigned char)text[i]))
        {
            count++;
        }
    }
    return count;
}

size_t count_special_characters(const char *text)
{
    size_t count = 0;

    for (size_t i = 0; text[i] != '\0'; i++)
    {
        unsigned char character = (unsigned char)text[i];

        if (!isalpha(character) &&
            !isdigit(character) &&
            character != ' ')
        {
            count++;
        }
    }

    return count;
}