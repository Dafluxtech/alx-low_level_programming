EVEN MORE POINTERS, ARRAYS AND STRINGS

RESOURCES:-
Read or watch:

c - Pointer to Pointer

C – Pointer to Pointer with example

Multi-dimensional Arrays in C

Two dimensional (2D) arrays in C programming with example


General:-

What are pointers to pointers and how to use them

What are multidimensional arrays and how to use them

What are the most common C standard library functions to manipulate strings

TASKS:-

0  a function that fills memory with a constant byte. 
	
	Prototype: char *_memset(char *s, char b, unsigned int n);
	
	The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b.
	
	Returns a pointer to the memory area s.

1 a function that copies memory area.
	
	Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
	
	The _memcpy() function copies n bytes from memory area src to memory area dest.
	
	Returns a pointer to dest.

2  a function that locates a character in a string.
	
	Prototype: char *_strchr(char *s, char c);
	
	Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found.
	
	N.B:- The standard library provides a similar function: strchr. Run man strchr to learn more.

3 a function that gets the length of a prefix substring.
	
	Prototype: unsigned int _strspn(char *s, char *accept);
	
	Returns the number of bytes in the initial segment of s which consist only of bytes from accept
	
	N.B:- The standard library provides a similar function: strspn. Run man strspn to learn more.

4 a function that searches a string for any of a set of bytes.
	
	Prototype: char *_strpbrk(char *s, char *accept);
	
	The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
	
	Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found.
	
	N.B: The standard library provides a similar function: strpbrk. Run man strpbrk to learn more.

5 a function that locates a substring
	
	Prototype: char *_strstr(char *haystack, char *needle)
	
	The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
	
	Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.
	
	N.B:- The standard library provides a similar function: strstr. Run man strstr to learn more.

6 a function that prints the chess board
	
	Prototype: void print_chessboard(char (*a)[8])

7 a function that prints the sum of the two diagonals of a square matrix of integers.
	
	Prototype: void print_diagsums(int *a, int size);
	
	Note that in the following example we are casting an int[][] into an int*. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.

8 a function that sets the value of a pointer to a char

	Prototype: void set_string(char **s, char *to)
