/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:52:17 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/21 19:32:34 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	get_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*make_string(int len, int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		str[len] = '0' + (n % 10);
		n = (n / 10);
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*str;

	sign = 1;
	len = get_len(n);
	if (n < 0)
	{
		sign *= -1;
		n *= -1;
	}
	str = make_string(len, n);
	if (sign == -1)
		str[0] = '-';
	return (str);
}

int	main(void)
{
	char	*str;

	str = ft_itoa(-12898);
	printf("%s\n", str);
	free(str);
	return (0);
}
