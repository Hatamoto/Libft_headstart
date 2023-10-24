/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:04:52 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/21 15:15:43 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tdst;
	char	*tsrc;
	size_t	i;

	tdst = (char *)dst;
	tsrc = (char *)src;
	i = 0;
	while (i < n)
	{
		tdst[i] = tsrc[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dst1[] = "aaaaaaa";
	char	dst2[] = "aaaaaaa";
	char	src[] = "Hello_";

	printf("%s\n", (char *)ft_memcpy(dst1, src, 2));
	printf("%s\n", (char *)memcpy(dst2, src, 2));
}
*/
