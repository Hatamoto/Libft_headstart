/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:01:56 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/17 10:58:55 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	j;

	j = 0;
	if (*needle == '\0')
		return (haystack);
	while (*haystack && (j + ft_strlen(needle) < len))
	{
		i = 0;
		while (*(haystack + i) == *(needle + i) || *(needle + i) == '\0')
		{
			if (*(needle + i) == '\0')
				return (haystack);
			i++;
		}
		haystack++;
		j++;
	}
	return (NULL);
}
