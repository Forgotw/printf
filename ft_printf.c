/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <lsohler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:36:52 by lsohler           #+#    #+#             */
/*   Updated: 2022/11/15 19:25:32 by lsohler          ###   ########.fr       */
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
