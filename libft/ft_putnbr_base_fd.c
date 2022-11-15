/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <lsohler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:54:45 by lsohler           #+#    #+#             */
/*   Updated: 2022/11/15 16:43:09 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_checkbase(char *base)
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

void	ft_putnbr_base_fd(int x, char *base, int fd)
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
