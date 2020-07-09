/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmadela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:54:39 by tsmadela          #+#    #+#             */
/*   Updated: 2020/07/09 10:56:49 by tsmadela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(int c);

void	ft_putstr(char *str)
{
		int i;

		i = 0;
		while(str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
}

