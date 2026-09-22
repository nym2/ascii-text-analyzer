#include <stdio.h>
#include <stdlib.h>

#include "analyzer.h"

int main(void)
{
    printf("ASCII Text Analyzer\n");
    printf("-------------------\n\n");

    printf("Input the text you want to analyze: ");

    char *text = read_input();

    if (text == NULL)
    {
        fprintf(stderr, "Error: memory allocation failed.\n");
        return 1;
    }

    printf("\nOriginal text: %s\n\n", text);

    printf("Characters:                 %zu\n", count_characters(text));
    printf("Letters:                    %zu\n", count_letters(text));
    printf("Digits:                     %zu\n", count_digits(text));
    printf("Spaces:                     %zu\n", count_spaces(text));
    printf("Special chars:              %zu\n", count_special_characters(text));

    printf("\n");

    printf("Uppercase:                  %zu\n", count_uppercase(text));
    printf("Lowercase:                  %zu\n", count_lowercase(text));

    printf("\n");

    print_character_frequencies(text);

    printf("\n");

    printf("ASCII values:\n");
    print_ascii_values(text);

    free(text);

    return 0;
}