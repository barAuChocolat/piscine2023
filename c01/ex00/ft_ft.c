/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:47:33 by babonnet          #+#    #+#             */
/*   Updated: 2023/07/12 19:16:01 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}


#include <stdio.h>


void main(){
	int i = 12;
	printf("%d\n", i);
	ft_ft(&i);
	printf("%d", i);
}
	