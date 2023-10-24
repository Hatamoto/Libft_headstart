/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:18:51 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/21 14:54:26 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_addtoval(char *c)
{
	*c -= 32;
}

void	ft_striter(char *s, void (*f)(char *))
{
	while (*s)
	{
		(*f)(s);
		s++;
	}
}

/*
int main(void)
{
	char	str[] = "Nakkikeitto.";
	ft_striter(str, ft_addtoval);
	write(1, str, sizeof(str) - 1);
}
*/
