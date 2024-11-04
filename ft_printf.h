/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukhija <ssukhija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:04:35 by ssukhija          #+#    #+#             */
/*   Updated: 2024/11/04 12:30:02 by ssukhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int	ft_printf(const char *format, ...);
int	ft_putstr(char *str);
int	ft_putchar(int c);
int	ft_putnbr(int nb);
int	ft_lowhex(unsigned long nb);
int	ft_uphex(unsigned long nb);
int	ft_putptr(unsigned long n);
int	ft_putunit(unsigned int nb);

#endif
