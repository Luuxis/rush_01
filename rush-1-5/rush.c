/*
** EPITECH PROJECT, 2026
** Star
** File description:
** Display a star in the terminal
*/

#include "my.h"

static void str_repeat(char c, unsigned int n)
{
    while (n > 0) {
        my_putchar(c);
        n--;
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
        if (x == 1 || y == 1)
            str_repeat('B', x);
        else if (i == 0) {
            my_putchar('A');
            str_repeat('B', x - 2);
            my_putchar('C');
        } else if (i == y - 1) {
            my_putchar('C');
            str_repeat('B', x - 2);
            my_putchar('A');
        } else {
            my_putchar('B');
            str_repeat(' ', x - 2);
            my_putchar('B');
        }
        my_putchar('\n');
        i++;
    }
}
