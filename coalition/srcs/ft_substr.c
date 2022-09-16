/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:57:41 by dantremb          #+#    #+#             */
/*   Updated: 2022/09/16 00:21:46 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coalition.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	size_t			i;
	size_t			slen;
	char			*tmp;

	if (!src)
		return (NULL);
	slen = ft_strlen(src);
	if (start > slen)
		return (NULL);
	tmp = malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tmp[i] = src[start + i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
