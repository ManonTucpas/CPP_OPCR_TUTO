#ifndef _ARME_HPP_
# define _ARME_HPP_

# include <iostream>
# include <string>

class Arme
{
	public:
		Arme(void);
		Arme(std::string nom, int degats);
		~Arme(void);
		
		int		getDegats(void) const;
		void    changer(std::string nom, int degats);
		void    afficher(void) const;
	
	private:

			std::string _nom;
			int         _degats;
};

#endif