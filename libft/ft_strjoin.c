/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:25:39 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/16 20:23:44 by pcervant         ###   ########.fr       */
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

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	size_t size_1;
	size_t size_2;
	size_t i;
	size_t total;

	size_1 = calcular(s1);
	size_2 = calcular(s2);
	total = size_1 * size_2;
	if (total == 0)
		return (NULL);
	str = malloc((total + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		if (i < size_1)
			str[i] = s1[i];
		if (i >= size_1)
			str[i] = s2[i - size_1];
		i++;
	}
	str[total] = '\0';
	return (str);
}
