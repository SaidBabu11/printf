#include "main.h"
/**
 * print_char - print character
 *
 * @value: list of arguments
 * Return: no. chars printed
 */
int print_char(va_list value)
{
	char c = va_arg(value, int);

	return (write(1, &c, 1));
}

/**
 * print_strings - print strings
 *
 * @value: strings valus
 * Return: no. printed chars
 */
int print_strings(va_list value)
{
	int len = 0, i;
	char *str;

	str = va_arg(value,  char *);
	if (str == NULL)
	{
		str = "(null)";
		while (str[len] != '\0')
			len++;
		for (i = 0; i < len; i++)
			write(1, " ", 1);
		return (len);
	}
	else
	{
		while (str[len] != '\0')
			len++;
		for (i = 0; i < len; i++)
			write(1, &str[i], 1);
		return (len);
	}
}

/**
 * print_Percent - print percentage sign
 *
 * @value: list of arguments
 * Return: no. printed chars
 */
int print_Percent(va_list value)
{
	UNUSED(types);

	return (write(1, "%%", 1));
}
