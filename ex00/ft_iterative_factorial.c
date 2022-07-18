/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <islomvalievabudabi@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 01:28:56 by ivaliev           #+#    #+#             */
/*   Updated: 2022/03/26 01:45:03 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	while (nb > 0)
	{
		a *= nb;
		nb --;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (a);
}
/*
int main()
{
	printf("%i",ft_iterative_factorial(5));
}*/
