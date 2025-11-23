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
    if (this != &src)
    {
        *this = src;
    }
}

void ScavTrap::attack(const std::string &target) 
{
    if (getHealth() <= 0 || getEnergy() <= 0)
    {
        std::cout << "ScavTrap " << getName() << " cannot attack." << std::endl;
        return;
    }
    std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage!" << std::endl;
   setEnergy(this->getEnergy() - 1);
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (getHealth() <= 0)
    {
        std::cout << "ScavTrap " << getName() << " is already destroyed." << std::endl;
        return;
    }
    setHealth(getHealth() - amount);
    if (getHealth() < 0)
        setHealth(0);
    std::cout << "ScavTrap " << getName() << " takes " << amount << " points of damage! Current health: " << getHealth() << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (getHealth() <= 0 || getEnergy() <= 0)
    {
        std::cout << "ScavTrap " << getName() << " cannot be repaired." << std::endl;
        return;
    }
    setHealth(getHealth() + amount);
    setEnergy(getEnergy() - 1);
    std::cout << "ScavTrap " << getName() << " is repaired by " << amount << " points! Current health: " << getHealth() << std::endl;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode." << std::endl;
}