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
    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 13);
        return;
    }

    for (int i = 0; i < y; i++) {
        if (i == 0 || i == y - 1) {
            my_putchar('o');
            if (x > 2)
                str_repeat('-', x - 2);
            if (x > 1)
                my_putchar('o');
        } else {
            my_putchar('|');
            if (x > 2)
                str_repeat(' ', x - 2);
            if (x > 1)
                my_putchar('|');
        }
        my_putchar('\n');
    }
}