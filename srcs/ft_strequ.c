/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:46:35 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/21 15:33:26 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This is not a true lexicographical comparison!
#include <stdio.h>

int	ft_strequ(const char *s1, const char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", ft_strequ(argv[1], argv[2]));
	else
		printf("Wrong number of arguments.\n");
}
