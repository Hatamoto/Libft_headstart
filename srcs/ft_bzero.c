/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:23:37 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/21 15:29:16 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0' && i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/*
int	main(void)
{
	char	str[] = "abcdefg";
	char	str2[] = "abcdefg";

	ft_bzero(str, 5);
	bzero(str2, 5);
	printf("%s\n", str);
	printf("%s", str2);
}
*/
