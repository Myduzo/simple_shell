#include "shellib.h"

/**
 * my_strlen - string conter
 * @s : string
 * Return: Always 0.
 */
size_t my_strlen(const char *s)
{
size_t len = 0;
while (*s++)
len++;

return len;
}
