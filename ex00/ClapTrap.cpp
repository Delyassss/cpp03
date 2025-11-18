/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:34:06 by marvin            #+#    #+#             */
/*   Updated: 2025/11/10 21:34:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : Name("Default"), health(10), energy(10), damage(0)
{
    std::cout << "Default constructor called" << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name):Name(name),health(10),energy(10),damage(0)
{
    std::cout << "Parametric constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        this->Name = src.Name;
        this->health = src.health;
        this->energy = src.energy;
        this->damage = src.damage;
    }
    return *this;
}
ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "Copy constructor called" << std::endl;
    if (this != &src)
    {
        *this = src;
    }
}

void ClapTrap::attack(const std::string &target)
{
    if (health <= 0 || energy <= 0)
    {
        std::cout << "ClapTrap " << Name << " cannot attack." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
    energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (health <= 0)
    {
        std::cout << "ClapTrap " << Name << " is already dead." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
    health -= amount;
    if (health < 0)
        health = 0;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (health <= 0 || energy <= 0)
    {
        std::cout << "ClapTrap " << Name << " cannot be repaired." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << Name << " is repaired by " << amount << " points!" << std::endl;
    health += amount;
    energy--;
}
