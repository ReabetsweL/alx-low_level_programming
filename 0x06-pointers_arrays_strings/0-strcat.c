/*
 * File: 0-strcat.c
 * Auth: ReabetsweL
 */

#include "main.h"

/**
 *
 * _strcat - Concatenates two strings.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    int i, j;

    i = j = 0;
    while (dest[i] != '\0')
        i++;

    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\n'; /* Add a new line character */
    dest[i + 1] = '\0'; /* Add the terminating null byte */
    return (dest);
}
