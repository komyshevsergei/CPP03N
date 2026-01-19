/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomyshe <skomyshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 00:08:13 by skomyshe          #+#    #+#             */
/*   Updated: 2026/01/19 18:41:41 by skomyshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Sergei");

    a.attack("target Boris");
    a.takeDamage(5);
    a.beRepaired(10);

    for (int i = 0; i < 12; i++)
        a.attack("Boris");

    return 0;
}