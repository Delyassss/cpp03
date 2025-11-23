/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:34:12 by marvin            #+#    #+#             */
/*   Updated: 2025/11/10 21:34:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string.h>
#include <iostream>

class ClapTrap
{
    protected :
        std::string _name;
        int health;
        int energy;
        int damage;
    public :
         void attack(const std::string& target);
         void takeDamage(unsigned int amount);
         void beRepaired(unsigned int amount);
         ClapTrap();
         ~ClapTrap();
         ClapTrap(std::string name);
         ClapTrap(const ClapTrap &src);
         ClapTrap & operator=(const ClapTrap &src);
         ClapTrap(std::string name, int hp, int en, int ad);
         void setHealth(int hp);
         void setEnergy(int en);
         void setDamage(int ad);
         void setName(std::string name);
         int getDamage() const;
         int getHealth() const;
         int getEnergy() const;
         std::string getName() const;
         std::string classname;
        







};

#endif