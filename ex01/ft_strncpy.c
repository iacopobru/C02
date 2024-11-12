/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:13:27 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/12 11:26:27 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;
	char				flag;
	char				*destination;

	flag = 0;
	i = 0;
	destination = dest;
	while (i < n)
	{
		if (*src == '\0')
			flag = 1;
		if (flag)
			*dest = '\0';
		else
			*dest = *src;
		i++;
		src++;
		dest++;
	}
	return (destination);
}
