/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpisano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:00:39 by bpisano           #+#    #+#             */
/*   Updated: 2017/11/07 13:41:16 by bpisano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	swap(char **s1, char **s2)
{
	char	*c;

	c = *s1;
	*s1 = *s2;
	*s2 = c;
}

void	sort(char **array)
{
	int		i;
	int		swaped;

	swaped = 1;
	while (swaped)
	{
		i = 1;
		swaped = 0;
		while (array[i])
		{
			if (ft_strcmp(array[i - 1], array[i]) > 0)
			{
				swap(&array[i - 1], &array[i]);
				swaped = 1;
			}
			i++;
		}
	}
}

int		main(int ac, char **av)
{
	int		i;

	if (ac > 2)
		sort(av + 1);
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
