#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>

int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int  _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
void *_memset(void *s, int c, size_t n);
char *_strcat(char *dest, char *src);
void *_memcpy(void *dest, const void *src, size_t n);
char *_strncat(char *dest, char *src, int n);
void swap_int(int *a, int *b);
char *_strchr(char *s, char c);
int _strcmp(char *s1, char *s2);
unsigned int _strspn(char *s, char *accept);
void reverse_array(int *a, int n);
char *_strpbrk(char *s, char *accept);
char *string_toupper(char *str);
char *_strstr(char *haystack, char *needle);
char *cap_string(char *str);
char *leet(char *str);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif
