/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <lsohler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:49:26 by lsohler           #+#    #+#             */
/*   Updated: 2022/11/17 14:22:34 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	ft_printfstr(char *str)
{
	int	x;

	x = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (x);
}
