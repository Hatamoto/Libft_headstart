/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:40:04 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/19 16:45:03 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%c\n", (char)ft_toupper((int)argv[1][0]));
		printf("%c\n", (char)toupper((int)argv[1][0]));
	}
	else
		printf("Wrong argument count.\n");
}
