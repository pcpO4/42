/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:46:56 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/16 20:24:11 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t i;
	unsigned char *u;

	i = calcular(s);
	u = s;
	while ((i != 0) && (u[i] != c))
	{
		--i;
	}
	return (u[i]);
}

size_t calcular(char *c)
{
	size_t tam;

	tam = 0;
	while (c[tam] != '\0')
		++tam;
	return (tam);
}
