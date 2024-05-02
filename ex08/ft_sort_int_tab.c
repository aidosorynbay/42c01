/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:52:17 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/02 20:52:22 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		i++;
	}
}

// int	main(void)
// {
// 	int n_array[] = {0, 3, 5, 1, 2, 4};
// 	ft_sort_int_tab(n_array, 6);
// }
	// for (i = 0; i < size; i++)
	// {
	// 	printf("%d ", tab[i]);
	// }