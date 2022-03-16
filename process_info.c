/*
** EPITECH PROJECT, 2020
** process_info
** File description:
** process_info
*/

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int my_putnbr(int nbr);

void my_putchar(char c);

void my_put_process()
{
    write(1, "PID: ", 5);
    my_putnbr(getpid());
    my_putchar('\n');
    write(1, "PPID: ", 6);
    my_putnbr(getppid());
    my_putchar('\n');
    write(1, "PGID: ", 6);
    my_putnbr(getpgrp());
    my_putchar('\n');
}
