/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 14:52:06 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/09 14:54:22 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *tab, int length)
{
	int max;
	int i;

	max = tab[0];
	i = 1;
	while (i < length)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}
		i++;
	}
}
