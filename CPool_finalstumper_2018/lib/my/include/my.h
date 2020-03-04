/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** Prototypes of all functions
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#ifndef __MY_H__
#define __MY_H__

int my_compute_factorial_it(int nb);
int my_compute_factorial_rec(int nb);
int my_compute_power_it(int nb, int p);
int my_compute_power_rec(int nb, int p);
int my_compute_factorial_rec(int nb);
int my_compute_square_root(int nb);
char *my_evil_str(char *str);
int my_find_prime_sup(int nb);
int is_valid_int(long nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int nb);
int my_print_alpha(void);
void my_print_gener(char num1, char num2, char num3);
int my_print_digits(void);
int my_print_revalpha(void);
void my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const * str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(const char *s1, const char *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
int compare(const char *str, const char *to_find);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
void my_swap_int(int a, int b);
char *concat_params(int argc, char **argv);
void my_show_word_array(char * const *tab);
char *my_strdup(char const *src);
char **my_str_to_word_array(char const *str);
char** arr_alloc(size_t x, size_t y);
int count_word(char const *str);
int sizeof_2d(char **str);
int my_sort_word_array(char **tab);
int my_get_color(unsigned char red, unsigned char green, unsigned char blue);
int my_swap_endian_color(int color);

#endif /*__MY_H__*/
