<<<<<<< HEAD
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char **strtow(char *str);
char *argstostr(int ac, char **av);
=======
#ifndef MAIN_H
#define MAIN_H
char *create_array(unsigned int size, char c);
void simple_print_buffer(char *buffer, unsigned int size);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
#endif
>>>>>>> 00e40592838597d7dd0a39c5ebccecc3a1c254e2
