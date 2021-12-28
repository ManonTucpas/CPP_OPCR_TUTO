#include "Personnage.hpp"
#include <iostream>

Personnage::Personnage(void) : _vie(100), _mana(100)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Personnage::Personnage(std::string nomArme, int degatsArme) : _vie(100), _mana(100), _arme(nomArme, degatsArme)
{
	std::cout << "Constructor surcharge 1 called" << std::endl;
	return;
}

// Personnage::Personnage(Personnage const& autre) : _vie(autre._vie), _mana(autre._mana), _arme(autre._arme._nom, autre._arme._degats)
// {
// 	std::cout << "Constructor surcharge 1 called" << std::endl;
// 	return;
// }

Personnage::Personnage(std::string nomArme, int degatsArme, int vie, int mana) : _vie(vie), _mana(mana), _arme(nomArme, degatsArme)
{
	std::cout << "Constructor surcharge 2 called" << std::endl;
	return;
}

Personnage::~Personnage(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}
		
void    Personnage::recevoirDegats(int nbDegats)
{
	_vie -= nbDegats;
	if (_vie < 0)
		_vie = 0;
	return ;
}

void    Personnage::attaquer(Personnage &cible)
{
	
	cible.recevoirDegats(_arme.getDegats());
	return ;

}

void    Personnage::boirePotionDeVie(int quantitePotion)
{
	_vie += quantitePotion;
	if (_vie > 100)
		_vie = 100;
	return ;
}

void    Personnage::changerArme(std::string nouvelleArme, int degatsNouvelleArme)
{
	_arme.changer(nouvelleArme, degatsNouvelleArme);
	return ;
}

bool    Personnage::estVivant(void) const
{
	if (_vie > 0)
		return (true);
	else
		return (false);
}

void	Personnage::afficherEtat(void) const
{
	std::cout << "Vie : " << _vie << std::endl;
	std::cout << "Mana : " << _mana << std::endl;
	_arme.afficher(); 
	return ;
}