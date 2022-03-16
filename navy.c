/*
** EPITECH PROJECT, 2020
** navy.c
** File description:
** navy
*/

#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c);

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i += 1;
    }
}

int ctoi(char c)
{
    return(c - '0');
}

int itoc(char c)
{
    return(c + '0');
}

int show_number(int nb)
{
    int op = 0;

    if (nb >= 10) {
        op = (nb % 10);
        nb = (nb - op) / 10;
        show_number(nb);
        my_putchar(op + 48);
    }
    else {
        my_putchar(nb + 48);
    }
}

void my_putnchar(char c, int n)
{
    for (int i = 0; i < n; i++) {
        my_putchar(c);
    }
}

void my_grid()
{
    char **grid = malloc(sizeof(char)*17);
    char cln[16];
    cln[16] = '\0';
    char c = 'A';
    int i = 0;
    
    my_putchar(' ');
    my_putchar('|');
    while (i < 15) {
        cln[i] = c;
        if (i != 14)
            cln[i+1] = ' ';
        c += 1;
        i += 2;
    }
    my_putstr(cln);
    my_putchar('\n');
}

void grid2()
{
    my_putchar('-');
    my_putchar('+');
    my_putnchar('-', 15);
    my_putchar('\n');
}

void lines()
{
    int ln = 1;
    for (int i = 0; i < 8; i++) {
        show_number(ln);
        my_putchar('|');
        for (int n = 0; n < 7; n++) {
            my_putchar('.');
            my_putchar(' ');
        }
        my_putchar('.');
        my_putchar('\n');
        ln += 1;
    }
}

int main() {
    my_putstr("enemy's positions:\n");
    my_grid();
    grid2();
    lines();
}
        
    
