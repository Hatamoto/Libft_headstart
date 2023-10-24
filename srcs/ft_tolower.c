/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:46:28 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/19 16:47:04 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%c\n", (char)ft_tolower((int)argv[1][0]));
		printf("%c\n", (char)tolower((int)argv[1][0]));
	}
	else
		printf("Wrong argument count.\n");
}
