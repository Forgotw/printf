/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <lsohler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:38:48 by lsohler           #+#    #+#             */
/*   Updated: 2022/11/22 16:19:16 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

# include "libft.h" 

int	ft_printfchar(char c);
int	ft_printfstr(char *str);
int	ft_printfnbr(int x);
int	ft_printfunbr(unsigned int x);
int	ft_hexlen(unsigned int x);
int	ft_printfhex(unsigned int nbr, const char format);
int	ft_printfptr(unsigned long int nbr);
int	ft_printf(const char *format, ...);

#endif
