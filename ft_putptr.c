/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukhija <ssukhija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:24:05 by ssukhija          #+#    #+#             */
/*   Updated: 2024/10/28 17:24:05 by ssukhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	addr;

	count = 0;
	if (ptr == NULL)
		count = ft_putstr("(nil)");
	else
	{
		addr = (unsigned long)ptr;
		count = ft_putstr("0x");
		count += ft_lowhex(addr);
	}
	return (count);
}
