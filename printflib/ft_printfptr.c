/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <lsohler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:43:25 by lsohler           #+#    #+#             */
/*   Updated: 2022/11/16 14:57:48 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_ptrlen(long int x)
{
	int	i;

	i = 0;
	if (x = 0)
		return (3);
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
	return (i + 2);
}

int	ft_checkbaseptr(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putptr_fd(long int x, char *base, int fd)
{
	int		baselen;
	long int	nbr;

	baselen = ft_strlen(base);
	nbr = x;
	if (ft_checkbase == 1)
	{
		if (nbr < 0)
		{
			nbr *=	-1;
			ft_putchar_fd('-', fd);
		}
		if (nbr < baselen)
			ft_putchar_fd(base[nbr]);
		if (nbr >= baselen)
		{
			ft_putnbr_base_fd(nbr / baselen, base, fd);
			ft_putnbr_base_fd(nbr % baselen, base, fd);
		}
	}
}

int	ft_printfptr(long int x)
{
	if (x == 0)
	{
		write (1, "0x0", 3);
		return (3);
	}
	write(1, "0x", 2);
	ft_putnbr_base_fd(x, "0123456789abcdef", 1);
	return (ft_ptrlen(x));

}
