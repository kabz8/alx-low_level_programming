#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int i);
int set_bit(unsigned long int *n, unsigned int i);
int clear_bit(unsigned long int *n, unsigned int i);
unsigned int flip_bits(unsigned long int n, unsigned long int k);
int get_endianness(void);

#endif