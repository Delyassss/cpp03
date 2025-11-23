/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:57:29 by marvin            #+#    #+#             */
/*   Updated: 2025/11/10 15:57:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    setHealth(100);
    setEnergy(100);
    setDamage(30);
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    setHealth(100);
    setEnergy(100);
    setDamage(30);
    std::cout << "FragTrap Parameterized constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        setName(other.getName());
        setHealth(other.getHealth());
        setEnergy(other.getEnergy());
        setDamage(other.getDamage());
    }
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    return *this;
}


FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other.getName())
{
    if (this != &other)
    {
     *this = other;
    }
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << " is requesting a high five!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (getHealth() <= 0 || getEnergy() <= 0)
    {
        std::cout << "FragTrap " << getName() << " cannot attack." << std::endl;
        return;
    }
    std::cout << "FragTrap " << getName() << " attacks " << target << ", causing " << getDamage() << " points of damage!" << std::endl;
    setEnergy(getEnergy() - 1);
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (getHealth() <= 0)
    {
        std::cout << "FragTrap " << getName() << " is already dead." << std::endl;
        return;
    }
    std::cout << "FragTrap " << getName() << " takes " << amount << " points of damage!" << std::endl;
    setHealth(getHealth() - amount);
    if (getHealth() < 0)
        setHealth(0);
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (getHealth() <= 0 || getEnergy() <= 0)
    {
        std::cout << "FragTrap " << getName() << " cannot be repaired." << std::endl;
        return;
    }
    std::cout << "FragTrap " << getName() << " is repaired by " << amount << " points!" << std::endl;
    setHealth(getHealth() + amount);
    setEnergy(getEnergy() - 1);
}

