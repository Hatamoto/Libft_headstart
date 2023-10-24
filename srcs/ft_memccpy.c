/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:34:06 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/21 15:10:05 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tdst;
	unsigned char	*tsrc;
	size_t			i;

	tdst = (unsigned char *)dst;
	tsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (tdst[i] == c)
			return (&tdst[i + 1]);
		tdst[i] = tsrc[i];
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	dst1[] = "aaabaab...........";
	char	dst2[] = "aaabaab...........";
	char	src[] = "Hello_";

	printf("%s\n", (char *)ft_memccpy(dst1, src, 'b', 5));
	printf("%s\n", dst1);
	printf("%s\n", (char *)memccpy(dst2, src, 'b', 5));
	printf("%s\n", dst2);
}
*/
