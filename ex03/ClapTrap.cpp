
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


ClapTrap::ClapTrap() : Name("Default"), health(10), energy(10), damage(0) , classname("ClapTrap")
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name):Name(name),health(10),energy(10),damage(0), classname("ClapTrap")
{
    std::cout << "ClapTrap Parametric constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name, int hp, int en, int ad ):Name(name),health(hp),energy(en),damage(ad), classname("ClapTrap")
{
    std::cout << "ClapTrap Parametric constructor 2 called" << std::endl;
}
ClapTrap & ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        classname = src.classname;
        this->Name = src.Name;
        this->health = src.health;
        this->energy = src.energy;
        this->damage = src.damage;
    }
    return *this;
}
ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    if (this != &src)
    {
        *this = src;
    }
}

void ClapTrap::attack(const std::string &target)
{
    if (health <= 0 || energy <= 0)
    {
        std::cout << classname  << " " << Name << " cannot attack." << std::endl;
        return;
    }
    std::cout << classname  << " " << Name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
    energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (health <= 0)
    {
        std::cout << classname  << " " << Name << " is already dead." << std::endl;
        return;
    }
    std::cout << classname  << " " << Name << " takes " << amount << " points of damage!" << std::endl;
    health -= amount;
    if (health < 0)
        health = 0;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (health <= 0 || energy <= 0)
    {
        std::cout << classname  << " " << Name << " cannot be repaired." << std::endl;
        return;
    }
    std::cout << classname  << " " << Name << " is repaired by " << amount << " points!" << std::endl;
    health += amount;
    energy--;
}

//getters and setters
void ClapTrap::setHealth(int hp)
{
    health = hp;
}
void ClapTrap::setEnergy(int en)
{
    energy = en;
}
void ClapTrap::setDamage(int ad)
{
    damage = ad;
}
void ClapTrap::setName(std::string name)
{
    Name = name;
}
int ClapTrap::getHealth() const
{
    return health;
}
int ClapTrap::getEnergy() const
{
    return energy;
}
std::string ClapTrap::getName() const
{
    return Name;
}
int ClapTrap::getDamage() const
{
    return damage;
}
