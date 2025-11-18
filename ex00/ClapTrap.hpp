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
    private :
        std::string Name;
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
};

#endif