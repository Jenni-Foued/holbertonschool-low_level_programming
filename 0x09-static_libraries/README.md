# <div align="center">0x09. C - Static libraries</div>

## About

   - What is a static library, how does it work, how to create one, and how to use it
   - Basic usage of ar, ranlib, nm

## Files & Descriptions

[libholberton.a](https://github.com/Jenni-Foued/holbertonschool-low_level_programming/tree/master/0x09-static_libraries/libholberton.a)  static library containing all the functions listed below

```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

[holberton.h](https://github.com/Jenni-Foued/holbertonschool-low_level_programming/tree/master/0x09-static_libraries/holberton.h)  contain all the prototypes of the above functions

[create_static_lib.sh](https://github.com/Jenni-Foued/holbertonschool-low_level_programming/tree/master/0x09-static_libraries/create_static_lib.sh)  a script that creates a static library called liball.a from all the .c files that are in the current directory
