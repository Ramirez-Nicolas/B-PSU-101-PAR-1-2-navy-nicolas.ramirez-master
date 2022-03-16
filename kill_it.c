/*
** EPITECH PROJECT, 2020
** kill_it
** File description:
** kill_it
*/

#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <sys/types.h>

void my_putchar(char c) {
    write(1, &c, 1);
}

int my_putnbr(int nbr) {
    int op;
    if (nbr >= 10) {
        op = (nbr % 10);
        nbr = (nbr - op) / 10;
        my_putnbr(nbr);
        my_putchar(op + 48);
    }
    else {
        my_putchar(nbr + 48);
    }
}

int my_kill_it(int pid)
{
    kill(pid, SIGQUIT);
    
}
