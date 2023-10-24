#include <stdio.h>

void puts2(const char *str)
{
    while (*str != '\0')
    {
        putchar(*str);
        putchar('\n');
        str += 2;
    }
}

