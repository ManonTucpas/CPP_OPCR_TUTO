#ifndef DUREE_HPP
# define DUREE_HPP

# include <iostream>
# include <string>

class   Duree
{
	public :
		Duree(int heures = 0, int minutes = 0, int seconds = 0);
		~Duree(void);
		bool	estEgal(Duree const& b) const;
		bool	plusPetit(Duree const& b) const;
		Duree&	operator+=(Duree const& a);
		void	afficher() const;

	private :

		int	_heures;
		int	_minutes;
		int	_seconds;
};

bool	operator==(Duree const& a, Duree const& b);
bool	operator!=(Duree const& a, Duree const& b);
bool	operator<(Duree const& a, Duree const& b);
Duree	operator+(Duree const& a, Duree const& b);

#endif