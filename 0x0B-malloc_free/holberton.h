#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int _putchar(char c);
#endif /* _HOLBERTON_H_ */