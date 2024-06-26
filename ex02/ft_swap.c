/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:56:20 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/02 15:56:22 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 22;
// 	b = 11;
// 	ft_swap(&a, &b);
// 	printf("%i\n", a);
// 	printf("%i\n", b);
// }
