/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <lsohler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:49:26 by lsohler           #+#    #+#             */
/*   Updated: 2022/11/22 17:49:38 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	ft_printfstr(char *str)
{
	int	x;

	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	x = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (x);
}
