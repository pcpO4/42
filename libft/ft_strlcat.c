/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:14:14 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/16 20:23:49 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t tam1;
	size_t tam2;
	unsigned char *u;
	unsigned char *s;

	i = 0;
	tam1 = calcular(src);
	tam2 = calcular(dst);
	u[tam1 + tam2] = "";
	s = src;
	if (tam1 == 0 && tam2 == 0)
		return (tam1 + tam2);
	while (tam2 < (tam1 + tam2))
	{
		u[tam2] = s[i];
		++tam2;
		++i;
	}
	return (tam2);
}

size_t calcular(char *c)
{
	size_t tam;

	tam = 0;
	while (c[tam] != '\0')
		++tam;
	return (tam);
}
