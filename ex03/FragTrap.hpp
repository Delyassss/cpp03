/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:38:28 by marvin            #+#    #+#             */
/*   Updated: 2025/11/10 15:38:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

    public:
    FragTrap();
    ~FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &src);
    FragTrap &operator=(const  FragTrap &src);
    void attack(const std::string &target);
    void beRepaired(unsigned int amount);
    void takeDamage(unsigned int amount);
    void highFivesGuys(void);
};
#endif