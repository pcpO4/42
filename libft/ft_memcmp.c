/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:12:13 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/16 10:19:54 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*u;
	unsigned char	*s;

	i = 0;
	u = s1;
	s = s2;
	while (i < n)
	{
		if (u[i] != s[i])
		{
			return (u[i] - s[i]);
		}
		i++;
	}
	return (0);
}
