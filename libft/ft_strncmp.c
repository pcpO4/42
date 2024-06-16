/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:54:25 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/16 10:02:47 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*u;
	unsigned char	*s;

	i = 0;
	u = s1;
	s = s2;
	while ((i < n) && (u[i] != '\0') && (s[i] != '\0'))
	{
		if (u[i] != s[i])
			return (u[i] - s[i]);
		++i;
	}
	return (0);
}
