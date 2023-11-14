#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)

/**
 * struct format_inp - Struct op
 *
 * @fmt: The format.
 * @fnc: The function associated.
 */
struct format_inp
{
	char fmt;
	int (*fnc)(va_list);
};

/**
 * typedef struct format_inp fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct format_inp fmt_t;

int _printf(const char *format, ...);

int print_char(va_list valu);
int print_strings(va_list value);
int print_Percent(va_list value);
int handle_printf(const char *format_inp, int *ind, va_list list);

#endif /*MAIN_H*/
