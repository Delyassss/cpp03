/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:34:15 by marvin            #+#    #+#             */
/*   Updated: 2025/11/10 21:34:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    FragTrap d;
    DiamondTrap e("DiamondBot");
    e.attack("FunBot");
    e.whoAmI();
    d.takeDamage(50);
    d.beRepaired(25);
    e.highFivesGuys();
    e.guardGate();
    e.attack("GuardBot"); 
    
    return 0;

}