/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epenaloz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:08:33 by epenaloz          #+#    #+#             */
/*   Updated: 2023/11/18 16:31:24 by epenaloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	type_check(char c, va_list args, size_t bytes)
{
	if (c == 'c')
		bytes = pf_putchar(va_arg(args, char), bytes);
	else if (c == 's')
		bytes = pf_putstr(va_arg(args, char *), bytes);
	else if (c == 'p')
		bytes = pf_putptr(va_arg(args, void *), bytes);
	else if (c == 'd' || c == 'i')
		bytes = pf_putnbr(va_arg(args, int), bytes);
	else if (c == 'u')
		bytes = pf_putnbr(va_arg(args, unsigned int), bytes);
	else if (c == 'x' || c == 'X')
	{
		if (c == 'x')
			bytes = pf_puthex(va_arg(args, unsigned int), bytes, "low");
		else
			bytes = pf_puthex(va_arg(args, unsigned int), bytes, "up");
	}
	else if (c == '%')
		bytes = pf_putchar('%', bytes);
	else
		bytes = -1;
	return (bytes);
}
			

int	ft_printf(char *str, …)
{
	int		bytes;
	va_list	args;

	bytes = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	while (str)
	{
		if (bytes == -1)
			return (va_end(args), bytes);
		if (*str == '%')
		{
			str++;
			bytes = type_check(*str, args, bytes);
		}
		else
			bytes = pf_putchar(*str, bytes);
		str++;
	}
	return (va_end(va), bytes);
}
