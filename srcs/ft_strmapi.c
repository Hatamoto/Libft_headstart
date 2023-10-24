/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:24:12 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/21 15:02:42 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strlen(char *str)
{
	size_t	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	ft_addtoval(unsigned int i, char c)
{
	char	d;

	i = i + 2;
	d = c - 32;
	return (d);
}

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*t;
	unsigned int	i;

	len = ft_strlen((char *)s);
	t = (char *)malloc(sizeof(char) * len + 1) if (!t) return (NULL);
	t[len] = '\0';
	i = 0;
	while (s[i])
	{
		t[i] = (*f)(i, s[i]);
		i++;
	}
	return (t);
}

/*
int	main(void)
{
	char	str[] = "Nakkikeitto.";
	char	*trgt;

	trgt = ft_strmapi(str, ft_addtoval);
	if (trgt == NULL)
	{
		write(2, "Memory allocation failed.\n", 25);
		return (0);
	}
	write(1, trgt, ft_strlen(trgt));
	free(trgt);
	return (0);
}
*/
