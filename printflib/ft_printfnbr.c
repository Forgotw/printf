/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <lsohler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:42:46 by lsohler           #+#    #+#             */
/*   Updated: 2022/11/17 14:20:22 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	ft_printfnbr(int x)
{
	int	len;

	len = ft_intlen(x);
	ft_putnbr_fd(x, 1);
	return (len);
}
