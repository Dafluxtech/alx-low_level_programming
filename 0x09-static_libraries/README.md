0x09. C - Static libraries

look at this concept:

C static libraries


Resources

Read or watch:

What Is A “C” Library? What Is It Good For?

Creating A Static “C” Library Using “ar” and “ranlib”

Using A “C” Library In A Program

What is difference between Dynamic and Static library(Static and Dynamic linking) (stop at 4:44)


man or help:

ar
ranlib
nm


General

What is a static library, how does it work, how to create one, and how to use it

Basic usage of ar, ranlib, nm


Bash

Allowed editors: vi, vim, emacs

All your scripts will be tested on Ubuntu 20.04 LTS

All your files should end with a new line (why?)

The first line of all your files should be exactly #!/bin/bash

A README.md file, at the root of the folder of the project, describing what each script is doing

All your files must be executable.


TASKS:-

0 the static library libmy.a containing all the functions listed below:

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

1 a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
