/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:49:31 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/21 14:49:34 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static size_t	ft_strlen(char *str)
{
	size_t	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

static char	ft_addtoval(char c)
{
	char	d;

	d = c - 32;
	return (d);
}

char	*ft_strmap(const char *s, char (*f)(char))
{
	size_t	len;
	char	*t;
	size_t	i;

	len = ft_strlen((char *)s);
	t = (char *)malloc(sizeof(char) * len + 1) if (!t) return (NULL);
	t[len] = '\0';
	i = 0;
	while (s[i])
	{
		t[i] = (*f)(s[i]);
		i++;
	}
	return (t);
}

/*
int	main(void)
{
	char	str[] = "Nakkikeitto.";
	char	*trgt;

	trgt = ft_strmap(str, ft_addtoval);
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
