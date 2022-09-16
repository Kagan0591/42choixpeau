/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 00:13:15 by root              #+#    #+#             */
/*   Updated: 2022/09/16 00:21:27 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coalition.h"

char	*ft_strdup(const char *src)
{
	char	*tmp;

	if (!src)
		return (NULL);
	tmp = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (tmp == NULL)
		return (0);
	ft_strlcpy(tmp, src, sizeof(char) * (ft_strlen(src) + 1));
	*(tmp + ft_strlen(src)) = '\0';
	return (tmp);
}
