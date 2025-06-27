/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppassos <ppassos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 09:49:15 by ppassos           #+#    #+#             */
/*   Updated: 2024/07/11 09:31:16 by ppassos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	number(unsigned long nbr, int base, char *b, int len)
{
	long int	temp;

	temp = nbr % base;
	nbr = nbr / base;
	if (nbr >= (unsigned long)base)
		len = number(nbr, base, b, len);
	else if (nbr > 0)
	{
		ft_putchar_fd(b[nbr], 1);
		len++;
	}
	ft_putchar_fd(b[temp], 1);
	len++;
	return (len);
}

int	ft_putnbr_base(long nbr, char *base, int neg)
{
	int	len_base;
	int	len;

	len = 0;
	len_base = ft_strlen(base);
	if (nbr < 0 && neg != 1)
	{
		nbr = -(nbr);
		len++;
		ft_putchar_fd('-', 1);
	}
	return (number(nbr, len_base, base, len));
}
/*int main() {
    long number = 123456789;
    char *hex_base = "0123456789abcdef";
    
    int printed_length = ft_putnbr_base(number, hex_base, 0);
    write(1, "\n", 1);

    return 0;
}*/