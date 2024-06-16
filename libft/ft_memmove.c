/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:33:56 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/15 12:44:13 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*u;
	unsigned char	*str;

	u = ft_memcpy(u, src, i);
	str = dest;
	while (i < n)
	{
		str[i] = u[i];
	}
	return (dest = str);
}
