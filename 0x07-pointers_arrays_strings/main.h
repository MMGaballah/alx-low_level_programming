#ifndef main_h
#define main_h

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
int _putchar(char c);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif
