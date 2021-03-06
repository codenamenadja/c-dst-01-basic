/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:45:50 by jihhan            #+#    #+#             */
/*   Updated: 2020/10/31 14:18:19 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_find_max(unsigned int *arr, int n)
{
    unsigned int     max;

    max = *arr;
    while (n--)
        max = (max > *(arr+n)) ? max : *(arr + n);
    
    return (max);
}

