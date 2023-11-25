/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epenaloz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 15:03:27 by epenaloz          #+#    #+#             */
/*   Updated: 2023/11/25 15:14:20 by epenaloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);

int		ft_printf(char *str, ...);
int		type_check(char c, va_list args, size_t bytes);
int		pf_putchar(char c, int count);
int		pf_putnbr(long n, int count);
int 	pf_putstr(char *str, int count);
int		pf_puthex(unsigned int n, int count, int mode);
int		
