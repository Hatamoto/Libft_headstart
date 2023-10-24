/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:24:37 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/21 18:11:38 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static char	**alloc_words(const char *s, char c, char **split_str);
static char	*make_word(const char *s, char c);
static char	**alloc_wlen(const char *s, char c, char **split_str);
static int	check_sep(const char s, char c);

char	**ft_strsplit(const char *s, char c)
{
	char	**split_str;

	split_str = NULL;
	split_str = alloc_words(s, c, split_str);
	split_str = alloc_wlen(s, c, split_str);
	return (split_str);
}

static char	**alloc_words(const char *s, char c, char **split_str)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && check_sep(s[i], c) == 1)
			i++;
		if (s[i] != '\0' && check_sep(s[i], c) == 0)
			words++;
		while (s[i] != '\0' && check_sep(s[i], c) == 0)
			i++;
	}
	split_str = malloc((words + 1) * sizeof(char *));
	if (!split_str)
		return (NULL);
	split_str[words] = 0;
	return (split_str);
}

static char	*make_word(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] != 0 && check_sep(s[i], c) == 0)
		i++;
	word = malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	word[i] = '\0';
	i = 0;
	while (s[i] != '\0' && check_sep(s[i], c) == 0)
	{
		word[i] = s[i];
		i++;
	}
	if (word == 0)
		return (0);
	return (word);
}

static char	**alloc_wlen(const char *s, char c, char **split_str)
{
	int		index;
	char	*p;
	int		i;

	i = 0;
	index = -1;
	while (s[i])
	{
		while (s[i] != '\0' && check_sep(s[i], c) == 1)
			i++;
		if (s[i] != '\0' && check_sep(s[i], c) == 0)
		{
			index++;
			p = (char *)&s[i];
			split_str[index] = make_word(p, c);
			if (split_str[index] == 0)
				return (NULL);
			i++;
		}
		while (s[i] != '\0' && check_sep(s[i], c) == 0)
			i++;
	}
	return (split_str);
}

static int	check_sep(const char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

/*
int	main(int argc, char *argv[])
{
	char	**split;
	int		i;

	if (argc != 3)
	{
		printf("Wrong number of arguments.\n");
		return (0);
	}
	split = ft_strsplit(argv[1], argv[2][0]);
	i = 0;
	while (split[i] != 0)
	{
		printf("%d : %s\n", i, split[i]);
		i++;
	}
	free(split);
	return (0);
}
*/
