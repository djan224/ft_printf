/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjan <bdjan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:27:47 by bdjan             #+#    #+#             */
/*   Updated: 2023/06/02 13:19:12 by bdjan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	lentot;
	char	*s3;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	lentot = len1 + len2 + 1;
	s3 = (char *)ft_calloc(lentot, sizeof(char));
	if (!s3)
		return (NULL);
	ft_memcpy(s3, s1, len1);
	ft_strlcat(&s3[len1], s2, lentot);
	return (s3);
}
