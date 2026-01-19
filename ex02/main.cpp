/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomyshe <skomyshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 00:08:13 by skomyshe          #+#    #+#             */
/*   Updated: 2026/01/19 22:35:11 by skomyshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap a("Sergei");

    a.attack("target Boris");
    a.takeDamage(5);
    a.beRepaired(10);

    for (int i = 0; i < 12; i++)
        a.attack("Boris");
    a.highFivesGuys();

    return 0;
}