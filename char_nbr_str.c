/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_nbr_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epenaloz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:20:17 by epenaloz          #+#    #+#             */
/*   Updated: 2023/11/18 16:31:23 by epenaloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
#include "unistd.h"

int	pf_putchar(char c, int count)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	else
		return (count + 1);
}

int	pf_putnbr(long n, int count)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		count++;
	}
	if (n > 9)
	{
		count = pf_putnbr(n / 10, count);
		count = pf_putchar(n % 10 + '0', count);
	}
	else
		count = pf_putchar(n + '0', count);
	return (count);
}

int pf_putstr(char *str, int count)
{
	



/*#include "stdio.h"
#include "stdlib.h"

int	main (int ac, char **av)
{
	int	i;

	i = 0;
	if (ac >= 2)
		return (1);
	else if (ac == 1)
	{
		i = pf_putnbr(-2147483648, i);
		write(1, "\n", 1);
		printf("contador = %d\n", i); //contador = 11
		i = pf_putnbr(-1, i);
		write(1, "\n", 1);
		printf("contador = %d\n", i); //contador = 13
		i = pf_putnbr(0, i);
		write(1, "\n", 1);
		printf("contador = %d\n", i); //contador = 14
		i = pf_putnbr(2456, i);
		write(1, "\n", 1);
		printf("contador = %d\n", i); //contador = 18
		i = pf_putnbr(2147483647, i);
		write(1, "\n", 1);
		printf("contador = %d\n", i); //contador = 28
		i = pf_putnbr(-9223372036854, i); 
		write(1, "\n", 1);
		printf("contador = %d\n", i); //contador = 42
		i = pf_putnbr(4294967295, i);
		write(1, "\n", 1);
		printf("contador = %d\n", i); //contador = 52
		i = pf_putnbr(32, i);
		write(1, "\n", 1);
		printf("contador = %d\n", i); //contador 54
	}
	else if (ac == 2)
	{
		i = pf_putnbr(atoi(av[1]), i);
		write(1, "\n", 1);
		printf("contador = %d\n", i);
	}
	return (0);
}*/