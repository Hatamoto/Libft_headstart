/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:41:32 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/21 15:06:14 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		ft_putchar(c);
		i++;
	}
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)b;
	while ((str[i] != '\0') && (i < len))
	{
		str[i] = c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	str[] = "abcdefg";
	char	str2[] = "abcdefg";

	printf("%p : ", str);
	printf("%p\n", str2);
	printf("%p : ", ft_memset(str, 120, 5));
	ft_putstr(str);
	ft_putchar('\n');
	printf("%p", memset(str2, 120, 5));
	ft_putstr(str2);
	ft_putchar('\n');
}
*/
