/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <lsohler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:36:52 by lsohler           #+#    #+#             */
/*   Updated: 2022/11/16 10:28:59 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_printfarg(const char format, va_list arg)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_printfchar(va_arg(args, char));
	if (format == 's')
		len += ft_printfstr(va_arg(args, char *));
	if (format == 'p')
		len += ft_printfptr(va_arg(args, unsigned long));
	if (format == 'd' || format == 'i')
		len += ft_printfnbr(va_arg(args, int));
	if (format == 'u')
		len += ft_printfunbr(va_arg(args, unsigned int));
	if (format == 'x' || format == 'X')
		len += ft_printfhex(va_arg(args, unsigned int), format);
	if (format == '%')
		len += (int)write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int	len;
	int	i;
	va_list	arg;

	va_start(arg, format);
	i = 0;
	len = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_printfarg(format[i], arg);
		}
		else
			len += (int)write(1, &format[i], 1);
		i++
	}
	va_end(arg);
}
