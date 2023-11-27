/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:18:45 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/27 19:29:54 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_realloc(void *ptr, int new_size)
{
	void	*new_ptr;
	int		old_size;
	int		copy_size;

	if (!ptr)
		return (malloc(new_size));
	else if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	old_size = ft_malloc_usable_size(ptr);
	copy_size = old_size;
	if (new_size < old_size)
		copy_size = new_size;
	ft_memcpy(new_ptr, ptr, copy_size);
	free(ptr);
	return (new_ptr);
}
