/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 11:18:22 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/16 20:17:34 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t calcular(const char *c)
{
	size_t tam;

	tam = 0;
	while (c[tam] != '\0')
		++tam;
	return (tam);
}

char *ft_strdup(const char *s)
{
	size_t size;
	size_t i;
	char *str;

	size = calcular(s) + 1;
	i = 0;
	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < size - 1)
	{
		str[i] = s[i];
		++i;
	}
	str[size - 1] = '\0';
	return (str);
}
