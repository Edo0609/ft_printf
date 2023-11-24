/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epenaloz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:34:04 by epenaloz          #+#    #+#             */
/*   Updated: 2023/11/18 15:56:43 by epenaloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char *str;

	str = (char *)malloc(1);
	printf("prueba de %s\n", str);
	free(str);
	printf("prueba de %s\n", str);
	return (0);
}
