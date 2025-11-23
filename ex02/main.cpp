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
    ScavTrap c("GuardBot");
    FragTrap d("FunBot");
    d.attack("GuardBot");
    c.takeDamage(30);
    c.beRepaired(15);
    d.highFivesGuys();

    return 0;

}