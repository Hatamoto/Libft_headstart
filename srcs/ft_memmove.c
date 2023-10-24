/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:48:13 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/21 15:01:35 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	long long	i;

	if (!dst || !src)
		return (NULL);
	if (dst > src)
	{
		i = (long long)len - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (long long)len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}

/*
int	main(void)
{
	char	dst1[] = "aaabaab...........";
	char	dst2[] = "aaabaab...........";
	char	src[] = "Hello_";
	size_t	len;

	len = 9;
	printf("%s\n", (char *)ft_memmove(dst1, src, len));
	printf("%s\n", dst1);
	printf("%s\n", (char *)memmove(dst2, src, len));
	printf("%s\n", dst2);
}
*/
