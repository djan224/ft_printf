/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjan <bdjan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:07:31 by bdjan             #+#    #+#             */
/*   Updated: 2023/06/01 14:37:35 by bdjan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int i)
{
	unsigned char	temp;

	temp = (unsigned char)i;
	while (*s)
	{
		if (*s == temp)
			return ((char *)s);
		s++;
	}
	if (!s)
		return (NULL);
	if (temp == '\0')
		return ((char *)s);
	return (NULL);
}
