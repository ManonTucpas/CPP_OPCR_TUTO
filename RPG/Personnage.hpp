#ifndef _PERSONNAGE_HPP_
# define _PERSONNAGE_HPP_

# include <string>
# include "Arme.hpp"

class   Personnage
{

	public:
	
				Personnage(void);
			//	Personnage(Personnage const& autre);
				Personnage(std::string nomArme, int degatsArme);
				Personnage(std::string nomArme, int degatsArme, int vie, int mana);
				~Personnage(void);
		void    recevoirDegats(int nbDegats);
		void    attaquer(Personnage &cible);
		void    boirePotionDeVie(int quantitePotion);
		void    changerArme(std::string nouvelleArme, int degatsNouvelleArme);
		bool    estVivant(void) const;
		void	afficherEtat(void) const;

	private:

		int 		_vie;
		int			_mana;
		Arme		_arme;
};

#endif

