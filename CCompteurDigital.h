#ifndef CCOMPTEURDIGITAL_H
#define CCOMPTEURDIGITAL_H
#include <iostream>

using namespace std;


/**
 * Permet d'incrementer
 */
class CCompteurDigital {

private:
	/**
	 * La valeur max du compteur
	 */
    unsigned short BorneMax;
	unsigned short ValCPT;

    int minutes = 0;
    int heure = 0;

public:
	/**
	 * incremente le compteur de 1.
	 * RAZ le compteur automatique si la borne atteinte
	 * 
	 * Retour:
	 * false : pas de RAZ
	 * true : RAZ
	 */
	bool incrementer();

	/**
	 * Retourne la valeur courante du compteur sous forme de chaîne de caractere
	 */
    std::string GetValCPT();

	/**
	 * retourne la valeur sous forme d'entier
	 */
	int GetValCPTint();

	CCompteurDigital(/* valeur max initiale */int pBorneMax);
};

#endif
