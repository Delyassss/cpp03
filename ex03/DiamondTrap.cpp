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
    setHealth(FragTrap::getHealth());
    setEnergy(ScavTrap::getEnergy());
    setDamage(FragTrap::getDamage());
    std::cout << "DiamondTrap Default constructor called" << std::endl;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
    classname = "DiamondTrap";
    Name = name;
    setHealth(FragTrap::getHealth());
    setEnergy(ScavTrap::getEnergy());
    setDamage(FragTrap::getDamage());
    std::cout << "DiamondTrap Parameterized constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) :ClapTrap(src.getName()),  ScavTrap(src.getName()), FragTrap(src.getName())
{
    classname = "DiamondTrap";
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    *this = src;
}
DiamondTrap & DiamondTrap::operator=(const DiamondTrap &src)
{
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        classname = src.classname;
        setName(classname);
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
    std::cout << "DiamondTrap name: " << Name << ", ClapTrap name: " << ScavTrap::getName() << std::endl;
}
