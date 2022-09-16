/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coalition.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 23:07:40 by dantremb          #+#    #+#             */
/*   Updated: 2022/09/16 00:20:40 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COALITION_H
# define COALITION_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

char	*ft_get_next_line(int fd);
char	*ft_strchr(const char *str, int nbr);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char *s1, char const *s2, int f);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_substr(char const *src, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);

#endif
