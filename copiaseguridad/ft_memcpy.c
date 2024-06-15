/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 11:55:14 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/15 12:33:24 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*u;

	i = 0;
	str = dest;
	while (i < n)
	{
		str[i] = ((unsigned char *)src)[i];
		++i;
	}
	return (dest = str);
}

/*int main()
{
    char b[] = "aaaaa";
    char c[] = "bbbb";
    
    write(1, ft_memcpy(b, c, 2), 5);
    write(1, memcpy(b, c, 2), 5);
}*/