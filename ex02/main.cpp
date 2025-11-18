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

int main()
{
    ClapTrap a("RobotA");
    ClapTrap b("RobotB");

    a.attack("RobotB");
    b.takeDamage(0);
    b.beRepaired(5);
    b.attack("RobotA");
    a.takeDamage(0);
    a.beRepaired(3);

    ScavTrap c("GuardBot");
    c.attack("RobotA");
    a.takeDamage(20);
    a.takeDamage(5);
    a.beRepaired(10);
    c.guardGate();

    FragTrap d("FunBot");
    d.attack("GuardBot");
    c.takeDamage(30);
    c.beRepaired(15);
    d.highFivesGuys();

    return 0;

}