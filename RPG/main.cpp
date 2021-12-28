#include "Personnage.hpp"
#include <iostream>
#include <string>

int main()
{
    Personnage david;
	Personnage goliath("Epee aiguisee", 20);
	// Personnage cp_goliath(goliath);
	// Personnage tigrou("Epee aiguisee", 20, 100, 40);
    //Création de 2 objets de type Personnage : david et goliath
 
    goliath.attaquer(david); //goliath attaque david
    david.boirePotionDeVie(20); //david récupère 20 de vie en buvant une potion
    goliath.attaquer(david); //goliath réattaque david
    david.attaquer(goliath); //david contre-attaque... c'est assez clair non ?
    
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);
	
	std::cout << "David" << std::endl;
	david.afficherEtat();
	std::cout << std::endl << std::cout << "Goliath" << std::endl;
	goliath.afficherEtat();
 
    return 0;
}