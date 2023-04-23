#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - produces output according to a format.
 *@format:character string for va_list and va_ar
 * Return:the number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;

va_start(args, format);

int count = 0;

for (const char *p = format; *p != '\0'; p++)
{
	if (*p == '%')
	{
	switch (*(++p))
	{
	case 'c':
	putchar(va_arg(args, int));
	count;
	break;
	count;
	count += puts(va_arg(args, const char *));
	break;
	case '%':
	putchar('%');
	count++;
	break;
	default;
	/* unsupported conversion specifier, ignore it */
	break;
	}
	}
	else
	{
	putchar(*p);
	count++;
	}
}

	va_end(args);

	return (count);
}
