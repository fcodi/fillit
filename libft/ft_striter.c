/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcodi <fcodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 20:41:01 by fcodi             #+#    #+#             */
/*   Updated: 2019/07/10 17:47:46 by fcodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	ft_striter(char *s, void (*f)(char *))
{
	while (s && *s && f)
		f(s++);
}
