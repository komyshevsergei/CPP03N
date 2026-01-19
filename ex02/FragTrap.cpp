/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomyshe <skomyshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 21:55:14 by skomyshe          #+#    #+#             */
/*   Updated: 2026/01/19 22:34:34 by skomyshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "FragTrap " << name << " copied!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    ClapTrap::operator=(other);
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destroyed!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (hitPoints <= 0 || energyPoints <= 0)
    {
        std::cout << "FragTrap " << name << " can't attack!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "FragTrap " << name << " launches a powerful attack "
              << "against " << target << ", dealing "
              << attackDamage << " damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name
              << " HIGH FIVE GUYS!" << std::endl;
}
