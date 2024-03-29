/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:03:28 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/17 11:06:04 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int	ret;

	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	ret = *s1 - *s2;
	return (ret);
}
