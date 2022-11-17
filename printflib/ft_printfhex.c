/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <lsohler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:48:30 by lsohler           #+#    #+#             */
/*   Updated: 2022/11/17 14:18:26 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	ft_hexlen(unsigned int x)
{
	int	i;

	i = 0;
	if (x == 0)
		return (1);
	if (x < 0)
	{
		i++;
		x *= -1;
	}
	while (x != 0)
	{
		x /= 16;
		i++;
	}
	return (i);
}

int	ft_printfhex(unsigned int nbr, const char format)
{
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (format == 'x')
		ft_putnbr_base_fd(nbr, "0123456789abcdef", 1);
	if (format == 'X')
		ft_putnbr_base_fd(nbr, "0123456789ABCDEF", 1);
	return (ft_hexlen(nbr));
}
