/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:41:06 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/16 20:24:17 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int comprobar(char c, char const *set)
{
	size_t i;
	size_t len;

	len = ft_strlen(set);
	i = 0;
	while (i < len)
	{
		if (set[i] == c)
			return (1);
		++i;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t end;
	size_t start;
	size_t i;
	char *str;

	if ((!s1) || (!set))
		return (NULL);
	end = ft_strlen(s1);
	start = 0;
	while (comprobar(s1[i], set))
		++start;
	while (end > start && comprobar(s1[end - 1], set))
		--end;
	str = malloc((end - start + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while ((start + i) < end)
	{
		str[i] = s1[start];
		++i;
	}
	str[i] = '\0';
	return (str);
}
