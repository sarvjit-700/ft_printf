/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowhex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukhija <ssukhija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:22:57 by ssukhija          #+#    #+#             */
/*   Updated: 2024/11/04 12:27:36 by ssukhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lowhex(unsigned long nb)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	count = 0;
	if (nb < 16)
		count += ft_putchar(symbols[nb]);
	else
	{
		count += ft_lowhex((nb / 16));
		count += ft_lowhex((nb % 16));
	}
	return (count);
}
