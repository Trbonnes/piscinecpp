/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 13:55:41 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/03 13:42:12 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main() {
	std::string n = "Bobby";
	FragTrap A(n);
	std::string name = "Johnny";
	ScavTrap B(name);
	std::string nm = "Alfred";
	NinjaTrap C (nm);
	std::string nmn = "Satan";
	SuperTrap D (nmn);

	A.rangedAttack(name);
	B.takeDamage(A.getRangedAttackDamage());
	A.meleeAttack(name);
	B.takeDamage(A.getMeleeAttackDamage());
	B.meleeAttack(n);
	A.takeDamage(B.getMeleeAttackDamage());
	B.rangedAttack(n);
	A.takeDamage(B.getRangedAttackDamage());
	B.challengeNewcomer(n);
	D.ninjaShoebox(A);
	D.ninjaShoebox(B);
	D.ninjaShoebox(C);
	D.vaulthunter_dot_exe(name);
	B.takeDamage(999999999);
	return 0;
}
