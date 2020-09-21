/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 13:55:41 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/03 11:26:15 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main() {
	std::string n = "Bobby";
	FragTrap A(n);
	std::string name = "Johnny";
	ScavTrap B(name);
	std::string nm = "Alfred";
	NinjaTrap C (nm);

	A.rangedAttack(name);
	B.takeDamage(A.getRangedAttackDamage());
	A.meleeAttack(name);
	B.takeDamage(A.getMeleeAttackDamage());
	B.meleeAttack(n);
	A.takeDamage(B.getMeleeAttackDamage());
	B.rangedAttack(n);
	A.takeDamage(B.getRangedAttackDamage());
	B.challengeNewcomer(n);
	C.ninjaShoebox(A);
	C.ninjaShoebox(B);
	C.ninjaShoebox(C);
	C.ninjaShoebox(A);
	C.ninjaShoebox(B);
	C.ninjaShoebox(C);
	A.vaulthunter_dot_exe(name);
	B.takeDamage(999999999);
	return 0;
}
