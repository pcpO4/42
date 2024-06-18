/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:13:53 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/18 14:37:34 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	tam(int n)
{
	int	valor;

	valor = 0;
	if(n < 0)
	{
		++valor;
		n = -n;
	}
	while(n > 0)
	{
		n = n/10;
		valor++;
	}
	return (valor);
}

static char*	negativo(int n)
{
	int		i;
	char	*str;

	i = 0;
	str[0] = '-';
	n = -n;
	while(i + 1 < tam(n))
	{
		str[tam(n) - 1] = n % 10 + '0';
		n = n/10;
		++i;
	}
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
	i = 0;
	cnt = tam(n);
	if (n < 0)
		str = negativo(n);
	while (i < cnt)
	{
		str[cnt - i] = n % 10 + '0';
		n = n/10;
		++i;
	}
	str[i] = '\0';
	return (str);	
}

int	main()
{
	char *str = ft_itoa(-1274839);
	printf("%s", str);
	free(str);
}


