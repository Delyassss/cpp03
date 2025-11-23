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

int main()
{
    ClapTrap a("RobotA");
    ScavTrap c("GuardBot");
    c.attack("RobotA");
    a.takeDamage(20);
    a.takeDamage(5);
    a.beRepaired(10);
    c.guardGate();
    return 0;

}