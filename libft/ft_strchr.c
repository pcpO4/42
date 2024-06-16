/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:40:12 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/15 13:52:09 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*u;

	i = 0;
	u = s;
	while ((u[i] != '\0') && (u[i] != c))
	{
		++i;
	}
	return (u[i]);
}
