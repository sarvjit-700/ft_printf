/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukhija <ssukhija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:23:48 by ssukhija          #+#    #+#             */
/*   Updated: 2024/10/28 17:23:48 by ssukhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunit(unsigned int nb)
{
	long	nbr;
	int		count;

	count = 0;
	nbr = nb;
	if (nbr >= 10)
	{
		count += ft_putunit(nbr / 10);
		count += ft_putunit(nbr % 10);
	}
	if (nbr < 10)
	{
		count += ft_putchar(nbr + 48);
	}
	return (count);
}
