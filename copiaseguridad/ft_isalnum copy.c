/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:43:15 by pcervant          #+#    #+#             */
/*   Updated: 2024/05/11 19:31:49 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
//include libft

int	ft_isalnum(int c)
{
	if(ft_isdigit(c) || ft_isalpha(c))
	{
		return (1);
	}
	return (0);
}