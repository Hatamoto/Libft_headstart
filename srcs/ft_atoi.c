/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:00:04 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/21 14:56:08 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Stdlib-style atoi, accepts only one minus or plus

#include <stdlib.h>
#include <stdio.h>

static char	*ft_isspace(const char *str);
static int	ft_getval(const char *str, int ngt);

int	ft_atoi(const char *str)
{
	int	ngt;
	int	arg;

	ngt = 1;
	arg = 0;
	str = ft_isspace(str);
	if (*str == 45)
	{
		ngt *= -1;
		str++;
	}
	else if (*str == 43)
		str++;
	if (*str >= 48 && *str <= 57)
	{
		arg = ft_getval(str, ngt);
		return (arg);
	}
	return (0);
}

static char	*ft_isspace(const char *str)
{
	int	i;

	i = 0;
	while (i < 6)
	{
		if (*str == 32 || (*str >= 9 && *str <= 13))
		{
			str++;
			str = ft_isspace(str);
		}
		i++;
	}
	return ((char *)str);
}

static int	ft_getval(const char *str, int ngt)
{
	int	arg;

	arg = 0;
	while (*str >= 48 && *str <= 57)
	{
		if (arg != 0)
			arg *= 10;
		arg += *str - 48;
		str++;
	}
	arg *= ngt;
	return (arg);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", ft_atoi(argv[1]));
		printf("%d\n", atoi(argv[1]));
	}
	else
		printf("Wrong number of arguments.\n");
	return (0);
}
