/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 13:55:41 by trbonnes          #+#    #+#             */
/*   Updated: 2020/07/07 10:45:59 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main() {
	std::string n = "Bobby";
	FragTrap A(n);
	std::string name = "Johnny";
	ScavTrap B(name);

	A.rangedAttack(name);
	B.takeDamage(A.getRangedAttackDamage());
	A.meleeAttack(name);
	B.takeDamage(A.getMeleeAttackDamage());
	B.beRepaired(500);
	B.meleeAttack(n);
	A.takeDamage(B.getMeleeAttackDamage());
	B.rangedAttack(n);
	A.takeDamage(B.getRangedAttackDamage());
	B.challengeNewcomer(n);
	A.vaulthunter_dot_exe(name);
	B.takeDamage(999999999);
	return 0;
}
