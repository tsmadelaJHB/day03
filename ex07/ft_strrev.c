/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmadela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:59:56 by tsmadela          #+#    #+#             */
/*   Updated: 2020/07/09 11:22:54 by tsmadela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
		int i;
		int len;
		int temp;

		len = 0;
		while(str[len])
			len++;
		len--;
		i = 0;
		while(i < len)
		{
			temp = str[i];
			str[i] = str[len];
			str[len] = temp;
			i++;
			len--;
		}
		return(str);
}
