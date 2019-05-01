/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copyuntil.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshara <bshara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 19:37:21 by bshara            #+#    #+#             */
/*   Updated: 2019/04/28 19:58:41 by bshara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_copyuntil(char *s, char c)
{
	char	*ret;
	ssize_t	len;
	ssize_t	i;

	len = ft_lenuntil(s, c);
	if (len == -1)
	{
		len = ft_strlen(s);
	}
	ret = malloc(sizeof(char) * (len + 1));
	i = 0;
	while ()
	{

	}
}