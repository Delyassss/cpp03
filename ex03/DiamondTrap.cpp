/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:36:02 by marvin            #+#    #+#             */
/*   Updated: 2025/11/10 18:36:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() , classname("DiamondTrap")
{
    setHealth(100);
    setEnergy(50);
    setDamage(30);
    std::cout << "DiamondTrap Default constructor called" << std::endl;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    classname = "DiamondTrap";
    this->_name = name;
    setHealth(100);
    setEnergy(50);
    setDamage(30);
    std::cout << "DiamondTrap Parameterized constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) :ClapTrap(src.getName()),  ScavTrap(src.getName()), FragTrap(src.getName())
{
    classname = "DiamondTrap";
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    *this = src;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        classname = src.classname;
        setName(src._name);
        setHealth(src.getHealth());
        setEnergy(src.getEnergy());
        setDamage(src.getDamage());
    }
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}
void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << _name << ", ClapTrap name: " << ClapTrap::getName() << std::endl;
}
