/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <islomvalievabudabi@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:41:54 by ivaliev           #+#    #+#             */
/*   Updated: 2022/03/27 16:00:17 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*
#include <stdio.h>
int    main(void)

{
    int    index;

    index = -2;
    while (index < 10)
    {
        printf("fibonacci(%d) = %d\n", index, ft_fibonacci(index));
        index++;
   }
}*/
