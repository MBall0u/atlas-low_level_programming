#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - this function creates an array of chars and
 * initializes it with a specific char
 * Description - see the above comment
 * @size: the size of the array
 * @c: the character that is being initialized in the array
 * Return: Always 0 (success)
*/
char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *ptr;

    while (1)
    {
        ptr = malloc(sizeof(char) * size + 1);

        if (ptr == NULL)
        {
            return (1);
        }
        if (size == 0)
        {
            return (NULL);
        }
        for (i = 0; i < size; i++)
        {
            ptr[i] = c;
        }
    }
    return (ptr);
}