/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:12:46 by jnoh              #+#    #+#             */
/*   Updated: 2022/01/17 17:38:51 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	*ft_range(int min, int max);

int main()
{
	int	*ret;
	unsigned int i;

	ret = ft_range(-2147483648, 2147483647);
	
	for(i = 0U; i<= 20U; i++)
		printf("%d\n", ret[i]);
	for(i = 4294967260U; i <= 4294967294U; i++)
		printf("%d\n", ret[i]);
	return (1);
}
