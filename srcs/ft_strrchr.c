/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:45:26 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/21 15:07:35 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*found;

	found = NULL;
	while (*s)
	{
		if (*s == c)
			found = (char *)s;
		s++;
	}
	if (*s == c)
		found = (char *)s;
	return (found);
}
/*
int	main(void)
{
	char	*str = "Hello.world.how.are.you?";
	char	c = '.';

	printf("%s\n", ft_strrchr(str, c));
	printf("%s\n", strrchr(str, c));
}
*/
