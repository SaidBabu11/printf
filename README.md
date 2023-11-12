0x11. C - printf Description This printf project is a collaboration between ALI SAID and MOHAMEND RAJAB. Who are Software Engineers studing at students of ALX school. This project involves a function named "_printf" which would imitate the actual "printf" command located in the stdio.h library. This function contains some of the basic features and functions found in the man 3 of "printf".

What you would learn from this project:

How to use git in a team setting Applying variadic functions to big projects The complexities of printf Managing a lot of flies and finding a good workflow Prototype int _printf(const char *format, ...); Usage Prints a string to the standard output, according to a given format All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the command gcc -Wall -Werror -Wextra pedantic *.c Returns the number of characters in the output string on success, -1 otherwise Call it this way: _printf("format string", arguments...) where format string can contain conversion specifiers and flags, along with regular characters. The format contains the string that is printed. As _printf() is variadic function, it can receives n arguments that replace by n tags written inside the STRING.

The prototypes of all your functions should be included in your header file called main.h
COMMANDS AUTHORISED TO USE IN THE FOLLOWING PROJECT

write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
