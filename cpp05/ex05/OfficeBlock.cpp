/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 13:47:05 by trbonnes          #+#    #+#             */
/*   Updated: 2020/03/10 10:34:29 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(): _intern(NULL), _signing_b(NULL), _executing_b(NULL) {
}

OfficeBlock::OfficeBlock(const Intern &intern, const Bureaucrat &signing_b,
const Bureaucrat &executing_b): _intern(new Intern(intern)), _signing_b(new Bureaucrat(signing_b)),
_executing_b(new Bureaucrat(executing_b)) {
}

OfficeBlock::~OfficeBlock() {
	delete _intern;
	delete _signing_b;
	delete _executing_b;
}

void	OfficeBlock::setNewIntern(const Intern &intern) {
	_intern = new Intern(intern);
}

void	OfficeBlock::setNewSigning(const Bureaucrat &signing) {
	_signing_b = new Bureaucrat(signing);
}

void	OfficeBlock::setNewExecutor(const Bureaucrat &executor) {
	_executing_b = new Bureaucrat(executor);
}

void	OfficeBlock::setNullExecutor() {
	_executing_b = NULL;
}

void	OfficeBlock::setNullSigning() {
	_signing_b = NULL;
}

bool	OfficeBlock::isSigning() const {
	if (!_signing_b)
		return false;
	else
		return true;
}

bool	OfficeBlock::isExecutor() const {
	if (!_executing_b)
		return false;
	else
		return true;
}

const Bureaucrat	*OfficeBlock::getSigning() const {
	return _signing_b;
}

const Bureaucrat	*OfficeBlock::getExecutor() const {
	return _executing_b;
}

void	OfficeBlock::doBureaucracy(std::string formName, std::string target) const {
	if (!_intern)
		throw OfficeBlock::NoInternException();
	Form *form = _intern->makeForm(formName, target);
	if (!form)
		throw OfficeBlock::InternWrongForm();
	if (!_signing_b) {
		delete form;
		throw OfficeBlock::NoSigningException();
	}
	_signing_b->signForm(*form);
	if (!_executing_b) {
		delete form;
		throw OfficeBlock::NoExecutingException();
	}
	_executing_b->executeForm(*form);
	delete form;
}

const char	*OfficeBlock::NoInternException::what() const throw() {
	return "There is no Intern to do the dirty work!";
}

const char	*OfficeBlock::NoSigningException::what() const throw() {
	return "Nobody here can sign this form!";
}

const char	*OfficeBlock::NoExecutingException::what() const throw() {
	return "It seems the one in charge of the execution left on vacation!";
}

const char	*OfficeBlock::InternWrongForm::what() const throw() {
	return "The Intern got wrong instructions!";
}
