/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 21:08:53 by pcervant          #+#    #+#             */
/*   Updated: 2024/05/11 21:17:32 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_bzero(void *b, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = b;
	while (i < len)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

/*int		main()
{
	char b[] = "holabba";
	size_t len = 5;
	write(1, bzero(b, len), 5);
	printf("\n");
	write(1, ft_bzero(b, len), 5);
}*/