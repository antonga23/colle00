/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 16:10:14 by antonga           #+#    #+#             */
/*   Updated: 2018/04/15 16:39:20 by antonga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_char_display(char a, char b, char c, int len);

void	rush(int x, int y)
{
	int i;

	i = 0;
	if (x <= 0 || y <= 0)
		write(1, "One of your inputs is too small. \n", 34);
	if (x > 370 || y > 70)
		write(1, "An input is too big. Limit: (370, 70) \n", 39);
	if (y > 0 && x > 0 && x < 370 && y < 70)
	{
		ft_char_display('A', 'B', 'C', x);
		if (y > 2)
		{
			while (i < (y - 2))
			{
				ft_char_display('B', ' ', 'B', x);
				i++;
			}
		}
		if (y > 1)
		{
			ft_char_display('A', 'B', 'C', x);
		}
	}
	else
		write(1, "Please input a number, within the limit\n", 40);
}

void	ft_char_display(char a, char b, char c, int len)
{
	int i;

	i = 0;
	ft_putchar(a);
	while (i < (len - 2))
	{
		ft_putchar(b);
		i++;
	}
	if (len > 1)
	{
		ft_putchar(c);
	}
	ft_putchar('\n');
}
