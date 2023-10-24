/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:18:51 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/21 15:31:14 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_addtoval(unsigned int i, char *c)
{
	c[i] -= 32;
}

void	ft_striteri(char *s, void (*f)(unsigned int i, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, s);
		i++;
	}
}
/*
int main(void)
{
	char	str[] = "Nakkikeitto.";
	ft_striteri(str, ft_addtoval);
	write(1, str, sizeof(str) - 1);
}
*/
