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
	return (write(1, str, len));
}

/**
 * print_Percent - print percentage sign
 *
 * @value: list of arguments
 * Return: no. printed chars
 */
int print_Percent(va_list value)
{
	UNUSED(value);

	return (write(1, "%%", 1));
}

/**
 * print_int - Print integer
 * @values: List of arguments
 * @buffer: Buffer array
 * Return: No. chars printed
 */
int print_int(va_list values, char buffer[])
{
	int i = BUFF_SIZE - 2, len = 0;
	long int n = va_arg(values, long int);
	unsigned long int num;

	if (n == 0)
		buffer[i--] = '0';
	buffer[BUFF_SIZE - 1] = '\0';
	num = (unsigned long int)n;

	if (n < 0)
	{
		num = (unsigned long int)((-1) * n);
	}

	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}
	i++;
	len = BUFF_SIZE - i - 1;
	return (write(1, &num, len));
}
