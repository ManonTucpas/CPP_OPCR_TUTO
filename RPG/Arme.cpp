#include "Arme.hpp"

Arme::Arme(void) : _nom("Epee rouillee"), _degats(10)
{
	return;
}

Arme::Arme(std::string nom, int degats) : _nom(nom), _degats(degats)
{
	return;
}

Arme::~Arme(void)
{
	return ;
}

void    Arme::changer(std::string nom, int degats)
{
	_nom = nom;
	_degats = degats;
	return ;
}

void    Arme::afficher(void) const
{
	std::cout << "Arme : " << _nom << " (Degats : " << _degats << ")" << std::endl;
	return ;
}

int		Arme::getDegats(void) const
{
	return (_degats);
}