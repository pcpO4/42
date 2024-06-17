/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:03:25 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/16 20:23:52 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t tam;
	unsigned char *u;
	unsigned char *s;

	i = 0;
	tam = 0;
	u = dst;
	s = src;
	while (s[tam] != '\0')
	{
		++tam;
	}
	if (tam == 0)
		return (tam);
	while (i < size)
	{
		u[i] = ((unsigned char *)src);
		i++;
	}
	u[i] = '\0';
	return (tam);
}
