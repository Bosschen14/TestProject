#include <stdio.h>

/*
 * Name : <Insert name>
 * Program to experiment with character arrays
 */

#define MaxWord 20

int main()
{
    int len = 0;
    char c;
    char str[MaxWord + 1];

    puts("Enter text. Include a dot ('.') to end a sentence to exit:");
    do
    {
        c = getchar();

    } while (c != '.');
    if (c != ' ' && c != '.' && len < MaxWord)
    {
        /* This is a character of a word */
        str[len] = c;
        len++;

    }
    else
    {
        /* The word is done */
        str[len] = 0;

        len = 0;
    }
    printf("%s\n", str);
}