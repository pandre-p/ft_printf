/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ppercentage.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:45:53 by ppassos           #+#    #+#             */
/*   Updated: 2024/06/04 11:12:23 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ppercentage(unsigned long decimal)
{
	char	*base;
	int		i;

	base = "0123456789abcdef";
	if (decimal == 0)
		return (ft_putstr_fd("(nil)", 1));
	ft_putstr_fd("0x", 1);
	i = ft_putnbr_base(decimal, base, 1);
	return (2 + i);
}
