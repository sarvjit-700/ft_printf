/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukhija <ssukhija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:07:05 by ssukhija          #+#    #+#             */
/*   Updated: 2024/11/04 12:48:37 by ssukhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (str == NULL)
	{
		count = write(1, "(null)", 6);
		return (6);
	}
	while (str[i] != '\0')
	{
		count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}
