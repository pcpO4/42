/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:03:28 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/16 10:11:05 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*u;

	i = 0;
	u = s;
	while (i < n)
	{
		if (u[i] == ((unsigned char)c))
			return (&u[i]);
		++i;
	}
	return (NULL);
}
