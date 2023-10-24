/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:03:00 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/20 11:33:52 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	size_t		i;

	if (n == 0)
		return (0);
	str1 = (const char *)s1;
	str2 = (const char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	size_t	len;

	len = 0;
	if (argc == 4)
	{
		len = atoi(argv[3]);
		printf("%d\n", ft_memcmp((void *)argv[1], (void *)argv[2], len));
		printf("%d\n", memcmp((void *)argv[1], (void *)argv[2], len));
	}
	else
		printf("Wrong argument count.");
}
