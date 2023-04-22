# Printf

## Outline
This is a simple implementation of printf function that formats and prints data

## Description
The _printf() function produces output according to a format which is described below.
The function write its output to the stdout, the standard outpt stream. And returns the count of printed characters when the function is succesful.Returns -1 when the function fails.

The Available Conversion specifiers are:
- %c: prints a single character
- %s: prints a string of characters
- %d: prints integers
- %i: prints integers
- %b: prints the binary representation of unsigned decimal
- %u: prints unsigned integers
- %x: prints the hexadecimal represention of an unsigned decimal in lowercase letters
- %X: prints the hexadecimal represention of an unsigned decimal in uppercase letters
- %r: prints a reversed string
- %R: prints the Rot13 interpretation of a string


## Usage
All the files are to be compiled on Ubuntu 14.04 LTS
Compile your code with `gcc -Wall -Werror -Wextra -pedantic *.c`
Must include "main.h" header file on the files using the _printf() `#include "main.h"`



Project by `Stanley Nyoni` && `Sam Zhou`

Copyright (c) 2023.
