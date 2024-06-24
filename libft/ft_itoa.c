/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:13:53 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/24 13:12:07 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

static int	tam(int n)
{
	int	valor;

	valor = 0;
	if (n == 0)
		return (0);
	if (n < 0)
	{
		++valor;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		valor++;
	}
	return (valor);
}

static char	*negativo(long n)
{
	int		i;
	char	*str;
	size_t	len;

	str = (char *)malloc((tam(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '-';
	len = tam(n);
	n = -n;
	i = (len - 1);
	while ((n != 0))
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	str[len] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		cnt;

	str = (char *)malloc((tam(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str[0] = (0 + '0');
		return (str);
	}
	cnt = tam(n);
	if (n < 0)
		return (negativo((long)n));
	i = cnt - 1;
	while (n != 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	str[cnt] = '\0';
	return (str);
}
/*
int	main()
{
	char *str = ft_itoa(-1);
	printf("%s", str);
	free(str);
}*/