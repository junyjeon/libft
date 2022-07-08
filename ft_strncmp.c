/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:18:35 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/09 01:51:38 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s1 == *s2 && 0 < n)
	{
		n--;
		if (n == 0)
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
