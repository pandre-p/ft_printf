/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:34:04 by ppassos           #+#    #+#             */
/*   Updated: 2024/06/04 11:40:06 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <strings.h>
# include <string.h>

int		ft_printf(const char *format, ...);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
int		ft_putnbr_base(long nbr, char *base, int neg);
int		ft_ppercentage(unsigned long decimal);
#endif