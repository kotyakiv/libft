/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:53:02 by ykot              #+#    #+#             */
/*   Updated: 2021/11/02 14:37:12 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*newstr;
	size_t	i;

	newstr = ft_strdup(s);
	if (!newstr)
		return (NULL);
	i = 0;
	while (newstr[i])
	{
		f(newstr[i]);
		++i;
	}
	return (newstr);
}
