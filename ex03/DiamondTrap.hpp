/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:23:53 by marvin            #+#    #+#             */
/*   Updated: 2025/11/10 18:23:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap 
{
    private :
        std::string _name;
    public :
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &src);
        DiamondTrap & operator=(const DiamondTrap &src);
        void attack(const std::string& target);
        void whoAmI();
        std::string classname;

};
#endif

