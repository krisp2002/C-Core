/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kspahill <kspahill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:21:36 by kspahill          #+#    #+#             */
/*   Updated: 2025/11/03 15:40:49 by kspahill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sgn;
	int	res;

	i = 0;
	sgn = 1;
	res = 0;
	while((str[i] >=9 && str[i] <= 13) || str[i] == 32)
		i ++;
	if (str[i] == '-' || str[i] == '+')
		{
			if(str[i] == '-')
				sgn = -1;
			i++;
		}

	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sgn);
}
/*
int	main(void)
{
	const char *str = "    -234abc12";
	printf("ft: %d\n", ft_atoi(str));
	printf("real: %d\n", atoi(str));
}*/