Printf project aims to replicate the functionality of the standard printf function from the C library (<stdio.h>). This exercise allows for a deeper understanding of key concepts in the C language, such as handling variable arguments, formatting output, and working with pointers.

The implemented function accepts an indefinite number of arguments and displays their content on the standard output. Specifically, it supports the following formats:

- %c: Prints a single character. 
- %s: Prints a string (as defined by default in C). 
- %p: The given void * pointer is printed in hexadecimal format. 
- %d: Prints a decimal number (base 10). (Same as %i)
- %i: Prints a decimal number (base 10). (Same as %d)
- %u: Prints an unsigned decimal number (base 10). 
- %x: Prints a hexadecimal number (base 16) in lowercase. 
- %X: Prints a hexadecimal number (base 16) in uppercase. 
- %%: Prints the percentage symbol.
