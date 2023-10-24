/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:35:52 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/16 19:50:38 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static size_t	strl(char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	dlen;

	i = 0;
	j = 0;
	len = dstsize - strl(dst) - 1;
	dlen = strl(dst);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && j < len)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (dlen + strl(src));
}

static size_t	strl(const char *str)
{
	size_t	l;

	l = 0;
	while (*str)
	{
		l++;
		str++;
	}
	return (l);
}
