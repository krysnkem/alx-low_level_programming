#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

int _pow_recursion(int x, int y);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int _putchar(char c);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif /*MAIN_H*/
