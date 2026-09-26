/*
** EPITECH PROJECT, 2026
** Star
** File description:
** Display a star in the terminal
*/

#include "my.h"
#include <unistd.h>

static void str_repeat(char c, int n)
{
    while (n > 0) {
        my_putchar(c);
        n--;
    }
}

static void str_place(int i, int y, int x)
{
    if (x == 1 || y == 1)
        str_repeat('*', x);
    else if (i == 0) {
        my_putchar('/');
        str_repeat('*', x - 2);
        my_putchar('\\');
    } else if (i == y - 1) {
        my_putchar('\\');
        str_repeat('*', x - 2);
        my_putchar('/');
    } else {
        my_putchar('*');
        str_repeat(' ', x - 2);
        my_putchar('*');
    }
}

void rush(int x, int y)
{
    int i = 0;

    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 13);
        return;
    }
    while (i < y) {
        str_place(i, y, x);
        my_putchar('\n');
        i++;
    }
}
