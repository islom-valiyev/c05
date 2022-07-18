/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <islomvalievabudabi@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:17:45 by ivaliev           #+#    #+#             */
/*   Updated: 2022/03/26 19:53:38 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	while (power > 1)
	{
		i *= nb;
		power --;
	}
	if (power == 0)
		return (1);
	if (power < 0 )
		return (0);
	return (i);
}
/*
int main (void)
{
	printf("%i" , ft_iterative_power(3 , 5));
}*/
