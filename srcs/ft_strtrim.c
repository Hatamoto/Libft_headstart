/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:38:04 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/21 17:16:18 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

static int	ft_getstart(const char *s)
{
	int	i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}

static int	ft_getend(const char *s)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	return (i);
}

char	*ft_strtrim(const char *s)
{
	char	*new;
	int		newlen;
	int		start;
	int		end;
	int		i;

	start = ft_getstart(s);
	end = ft_getend(s);
	newlen = end - start + 1;
	new = (char *)malloc(sizeof(char) * newlen + 1);
	if (!new)
		return (NULL);
	new[newlen] = '\0';
	i = 0;
	while (i < newlen)
	{
		new[i] = s[start + i];
		i++;
	}
	return (new);
}

/*
int	main(void)
{
	char	str[] = " \t  No whitespaces.   \n";

	printf("Result: %s", ft_strtrim(str));
	return (0);
}
*/
