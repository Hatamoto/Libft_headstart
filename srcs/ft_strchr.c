/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:12:39 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/18 13:20:30 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}

int	main(void)
{
	char	*str;
	char	c;
	char	*ret;

	str = "Hello.world!";
	c = '.';
	ret = ft_strchr(str, c);
	printf("%s\n", ret);
	printf("%s\n", strchr(str, c));
}
