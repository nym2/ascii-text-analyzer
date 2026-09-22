#include "analyzer.h"

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

void print_character_frequencies(const char *text)
{
    size_t frequency[256] = {0};

    for (size_t i = 0; text[i] != '\0'; i++)
    {
        unsigned char character = (unsigned char)text[i];
        frequency[character]++;
    }

    size_t max_frequency = 0;

    for (size_t i = 0; i < 256; i++)
    {
        if (frequency[i] > max_frequency)
        {
            max_frequency = frequency[i];
        }
    }

    if (max_frequency == 0)
    {
        printf("No characters found.\n");
        return;
    }

    for (size_t i = 0; i < 256; i++)
    {
        if (frequency[i] == max_frequency)
        {
            printf("Most frequent character: '%c'\n", (char)i);
            printf("Frequency: %zu\n", frequency[i]);
        }
    }
}

void print_ascii_values(const char *text)
{
    for (size_t i = 0; text[i] != '\0'; i++)
    {
        unsigned char character = (unsigned char)text[i];

        printf("%c = %u\n", character, character);
    }
}

char *read_input(void)
{
    size_t capacity = 128;
    size_t length = 0;

    char *text = malloc(capacity);

    if (text == NULL)
    {
        return NULL;
    }

    int character;

    while ((character = getchar()) != '\n' && character != EOF)
    {
        if (length + 1 >= capacity)
        {
            capacity *= 2;

            char *temporary = realloc(text, capacity);

            if (temporary == NULL)
            {
                free(text);
                return NULL;
            }

            text = temporary;
        }

        text[length] = (char)character;
        length++;
    }

    text[length] = '\0';

    return text;
}

