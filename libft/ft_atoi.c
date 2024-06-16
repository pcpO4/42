/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:50:28 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/16 11:03:50 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	atoi(const char *nptr)
{
	int	signo;
	int	i;
	int	valor;

	signo = 1;
	i = 0;
	valor = 0;
	while (nptr[i] != '\0' && (nptr[i] == '-' || nptr[i] == '+'))
	{
		if (nptr[i] == '-')
		{
			signo = signo * (-1);
		}
		++i;
	}
	while (('\t' <= nptr[i] && nptr[i] <= '\r') || (nptr[i] == ' '))
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		valor = valor * 10 + (nptr[i] - '0');
		++i;
	}
	return (valor * signo);
}
