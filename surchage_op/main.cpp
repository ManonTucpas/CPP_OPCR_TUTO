#include "Duree.hpp"

int main(void)
{
	Duree duree1(4, 10, 2);
	Duree duree2(6, 10, 28);
	Duree duree3(20, 100, 50);
	Duree res;

	std::cout << "Duree1 : " <<std::endl;
	duree1.afficher();

	std::cout << "Duree2 : " <<std::endl;
	duree2.afficher();

	std::cout << "Duree3 : " <<std::endl;
	duree3.afficher();

	// duree1 += duree2;
	// std::cout << "Duree1 += Duree2 : " <<std::endl;
	// duree1.afficher();

	res = duree1 + duree2 + duree3;
	std::cout << "Duree TOTAL : " <<std::endl;
	res.afficher();


	// if (duree1 != duree2)
	// 	std::cout << "Les deux durees sont !=" << std::endl;
	// else
	// 	std::cout << "Les deux durees sont ==" << std::endl;

	// if (duree1 < duree2)
	// 	std::cout << "duree1 < duree2" << std::endl;
	// else
	// 	std::cout << "duree1 > duree2" << std::endl;
	return (0);
}