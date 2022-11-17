/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <lsohler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:38:48 by lsohler           #+#    #+#             */
/*   Updated: 2022/11/16 15:43:31 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_printfchar(char c);
int	ft_printfstr(char *str);
int	ft_printfnbr(int x);
int	ft_printfunbr(unsigned int x);
int	ft_hexlen(unsigned int x);
int	ft_printfhex(unsigned int nbr, const char format);

#endif
