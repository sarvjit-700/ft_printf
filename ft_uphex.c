/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uphex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukhija <ssukhija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:23:06 by ssukhija          #+#    #+#             */
/*   Updated: 2024/10/28 17:23:06 by ssukhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_uphex(long nb)
{
	int		count;
	char	*symbols;

	symbols = "0123456789ABCDEF";
	count = 0;
	if (nb < 16)
		count += ft_putchar(symbols[nb]);
	else
	{
		count += ft_uphex((nb / 16));
		count += ft_uphex((nb % 16));
	}
	return (count);
}
