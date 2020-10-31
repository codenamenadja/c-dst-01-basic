/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evenodd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:41:02 by jihhan            #+#    #+#             */
/*   Updated: 2020/10/31 12:47:28 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include "libft_ctype.h"

unsigned int **ft_evenodd(int *arr, int len)
{
    int             i;
    unsigned int    **pt;

    i = -1;
    pt = (unsigned int **)malloc(sizeof(unsigned int *) * 3);
    *pt = (unsigned int *)malloc(sizeof(unsigned int *));
    *(pt + 1) = (unsigned int *)malloc(sizeof(unsigned int *));

    if (!pt)
        return (NULL);

    **(pt) = 0;
    **(pt + 1) = 0;
    *(pt + 2) = NULL;

    while (++i < len)
    {
        if (
            ((**pt + *(arr + i)) > UINT_MAX) || 
            ((**(pt + 1) + *(arr + i)) > UINT_MAX)
            )
            return (pt);
        if (ft_iseven(*(arr + i)) > 0)
            **pt += *(arr + i);
        else 
            **(pt + 1) += *(arr + i);
    }

    return (pt);
}
