/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:53:56 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/02 18:53:57 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	count;
	int	temp;

	i = size - 1;
	count = 0;
	while (count <= i)
	{
		temp = tab[count];
		tab[count] = tab[i];
		tab[i] = temp;
		count++;
		i--;
	}
}

// int	main(void)
// {
// 	int num_array[] = {1, 2, 3, 4, 5};
// 	ft_rev_int_tab(num_array, 5);
// }
