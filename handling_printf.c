#include "main.h"
/**
 * handle_printf - Prints an argument based on its type
 * @fmt: Formatted string in which to print the arguments.
 * @list: List of arguments to be printed.
 * @ind: ind.
 * Return: return 1 or 2
 */
int handle_printf(const char *fmt, int *ind, va_list list)
{
	int i, printed_chars = -1;
	fmt_t fmt_types[] = {
		{'c', print_char}, {'s', print_strings}, {'%', print_Percent},
		{'i', print_int}, {'d', print_int}, {'\0', NULL}
	};
	for (i = 0; fmt_types[i].fmt != '\0'; i++)
	{
		if (fmt[*ind] == fmt_types[i].fmt)
			return (fmt_types[i].fnc(list));
	}
	if (fmt_types[i].fmt == '\0')
	{
		if (fmt[*ind] == '\0')
			return (-1);
	}
	return (printed_chars);
}
