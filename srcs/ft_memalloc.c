/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:50:08 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/21 15:13:00 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	*ft_memalloc(size_t size)
{
	char	*s;
	size_t	i;

	s = malloc(sizeof(char) * size) if (!s) return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = '0';
		i++;
	}
	return (s);
}

int	main(void)
{
	char	*s;
	size_t	len;
	size_t	i;

	len = 10;
	s = (char *)ft_memalloc(len);
	i = 0;
	while (i < len)
	{
		write(1, &s[i], 1);
		i++;
	}
}
