/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:21:59 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/19 17:44:52 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	str = (const char *)s;
	i = 0;
	while (i < n && str[i] != '\0')
	{
		if (str[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

int	main(int argc, char *argv[])
{
	size_t	len;

	len = 10;
	if (argc == 3)
	{
		printf("%s\n", (char *)ft_memchr((void *)argv[1], (int)argv[2][0],
				len));
		printf("%s\n", (char *)memchr((void *)argv[1], (int)argv[2][0], len));
	}
	else
		printf("Wrong argument count.");
}
