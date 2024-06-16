/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:20:51 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/16 10:49:53 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t			litt;
	unsigned char	*puntero;

	litt = calcular(little);
	if (litt == 0)
		return (big);
	puntero = buscar(big, little, len, litt);
	return (puntero);
}

char	*buscar(const char *big, const char *little, size_t len, size_t litt)
{
	size_t			i;
	size_t			j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < litt && big[i + j] == little[j])
			j++;
		if (j == litt)
			return ((char *)&big[i]);
		++i;
	}
	return (NULL);
}

size_t	calcular(char *c)
{
	size_t	tam;

	tam = 0;
	while (c[tam] != '\0')
		++tam;
	return (tam);
}
