/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 01:06:54 by marvin            #+#    #+#             */
/*   Updated: 2025/11/11 01:06:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    setHealth(100);
    setEnergy(50);
    setDamage(20);
    std::cout << "ScavTrap " << " Default contstructor called " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    setHealth(100);
    setEnergy(50);
    setDamage(20);

    std::cout << "ScavTrap " << getName() << " Parametric constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << getName() << " Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "ScavTrap " << getName() << " Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        setName(src.getName());
        setHealth(src.getHealth());
        setEnergy(src.getEnergy());
        setDamage(src.getDamage());
    }
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap()
{
    std::cout << "ScavTrap " << getName() << " Copy constructor called" << std::endl;
    *this = src;
}

void ScavTrap::attack(const std::string &target) 
{
    if (getHealth() <= 0 || getEnergy() <= 0)
    {
        std::cout << "ScavTrap " << this->getName() << " cannot attack." << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage!" << std::endl;
   setEnergy(this->getEnergy() - 1);
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode." << std::endl;
}