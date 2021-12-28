#include "Duree.hpp"

Duree::Duree(int heures, int minutes, int seconds) : _heures(heures), _minutes(minutes), _seconds(seconds)
{
    return ;
}

Duree::~Duree(void)
{
    return ;
}

bool	Duree::estEgal(Duree const& b) const
{
	if (_heures == b._heures && _minutes == b._minutes && _seconds == b._seconds)
		return (true);
	else
		return (false);
}

bool	Duree::plusPetit(Duree const& b) const
{
	if (_heures < b._heures)
		return (true);
	else if (_heures == b._heures && _minutes < b._minutes)
		return (true);
	else if (_heures == b._heures && _minutes == b._minutes && _seconds < b._seconds)
		return (true);
	else
		return (false);
}

Duree&	Duree::operator+=(Duree const& a)
{
	_seconds += a._seconds;
	_minutes += _seconds / 60;
	_seconds %= 60;

	_minutes += a._minutes;
	_heures += _minutes / 60;
	_minutes %= 60;

	_heures += a._heures;
	return *this;
}

void	Duree::afficher() const
{
	std::cout << _heures << "h" << _minutes << "m" << _seconds << "s" << std::endl;
}

bool	operator==(Duree const& a, Duree const& b)
{
	return (a.estEgal(b));
}

bool	operator!=(Duree const&a, Duree const& b)
{
	if (a == b)
		return (false);
	else
		return (true);
}

bool	operator<(Duree const& a, Duree const& b)
{
	return(a.plusPetit(b));
}

Duree	operator+(Duree const& a, Duree const& b)
{
	Duree copie(a);
	copie += b;
	return (copie);
}