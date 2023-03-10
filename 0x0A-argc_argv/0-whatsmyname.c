#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program followed by a new line
 * @argc: argument count
 * @argv: arguments passed through command line
 * Return: 0
 */

 int main (int argc, char **argv)
 {
    (void) argc;

    printf("%s\n", *argv);
    
    return (0);
 }