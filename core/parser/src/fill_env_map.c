/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_env_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 21:13:08 by ielbadao          #+#    #+#             */
/*   Updated: 2021/01/29 15:58:52 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parser.h"

t_map			*fill_env(t_string *envp)
{
	t_map		*map;
	t_string	*env;

	map = NULL;
	while (*envp)
	{
		env = ft_split(*envp, '=');
		add_to_map(&map, init_map(ft_strdup(env[0]), ft_strdup(env[1])));
		libre_2d(env);
		envp++;
	}
	return (map);
}
