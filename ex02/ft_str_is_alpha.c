/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:26:57 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/12 11:40:54 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'z')
		{
			if (*str >= '[' && *str <= '`')
				return (0);
		}
		else
			return (0);
		str++;
	}
	return (1);
}

// int main()
// {
// 	char c[] = "\'";
// 	printf("%d\n", *c);
// }