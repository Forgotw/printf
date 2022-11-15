/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <lsohler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:50:45 by lsohler           #+#    #+#             */
/*   Updated: 2022/11/15 18:07:20 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void	ft_putunbr_fd(unsigned int n, int fd)
{
	if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
	if (n < 10 && n >= 0)
		ft_putchar_fd((n + '0'), fd);
}
}
int	ft_printfunbr(unsigned int n)
{
	ft_putunbr_fd(n, 1);
	return (ft_uintlen(n));
}
