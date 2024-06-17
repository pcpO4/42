/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:03:39 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/16 20:24:22 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t calcular(const char *c, size_t start)
{
	size_t tam;

	tam = 0;
	while (c[start + tam] != '\0')
		++tam;
	return (tam);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;
	size_t sublen;

	sublen = calcular(s, start);
	if (sublen < len)
		sublen = len;
	str = malloc((sublen + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		++i;
	}
	str[start + i] = '\0';
	return (str);
}
