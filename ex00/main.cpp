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

    return 0;

}