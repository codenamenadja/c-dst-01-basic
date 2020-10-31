/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_max_matrix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:59:58 by jihhan            #+#    #+#             */
/*   Updated: 2020/10/31 14:09:55 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_find_max_matrix(unsigned int **arr, int len)
{
    int             i;
    int             n;
    unsigned int    *arr_pt;
    unsigned int    max;

    i = -1;
    max = 0;
    
    while (++i < len)
    {
        arr_pt = *(arr + i);
        n = -1;
    
        while (++n < len)
            max = (max < *(arr_pt + n)) ? *(arr_pt + n): max;
    }

    return (max);
}

