/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_usable_size.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:26:04 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/27 19:30:36 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_malloc_usable_size(void *ptr)
{
	int	*size_ptr;

	if (!ptr)
		return (0);
	size_ptr = (int *)ptr - 1;
	return (*size_ptr);
}
