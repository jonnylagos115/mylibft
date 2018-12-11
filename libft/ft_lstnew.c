/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 13:38:00 by jlagos            #+#    #+#             */
/*   Updated: 2018/11/28 12:24:54 by jlagos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list			*fresh_str;

	if (!(fresh_str = (t_list *)malloc(sizeof(*fresh_str))))
		return (NULL);
	if (content == NULL)
	{
		fresh_str->content = NULL;
		fresh_str->content_size = 0;
	}
	else
	{
		if (!(fresh_str->content = ft_memalloc(content_size)))
			return (NULL);
		ft_memcpy(fresh_str->content, content, content_size);
		fresh_str->content_size = content_size;
	}
	fresh_str->next = NULL;
	return (fresh_str);
}
