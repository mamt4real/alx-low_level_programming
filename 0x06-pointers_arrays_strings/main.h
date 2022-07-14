#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_strcat(char*, char*);
char *_strncat(char *dst, char *src, int n);
char *_strncpy(char *dst, char *src, int n);
void print_array(int*, int);
void reverse_array(int *a, int n);
char *string_toupper(char*);
char *cap_string(char*);
int is_delimeter(char);
void to_upper(char*);
char *leet(char*);
char *rot13(char*);
void print_helper(unsigned int n);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

#endif /* MAIN_H */
