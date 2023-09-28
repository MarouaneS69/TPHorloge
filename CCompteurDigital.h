/**
 * @file CCompteurDigital.h
 * @brief La classe permet l'incrementation et tous l'aspect technique de notre horloge
 * @author Marouane Serradj
 * @version v1.0.0
 * @class CCompteurDigital
 * @date 28/09/2023
 */
#ifndef CCOMPTEURDIGITAL_H
#define CCOMPTEURDIGITAL_H
#include <iostream>

using namespace std;


class CCompteurDigital {

private:

    unsigned short BorneMax=24; //!<La valeur max du compteur
    unsigned short ValCPT=00; //!<La valeur max du compteur


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

    CCompteurDigital(int pBorneMax);//!<valeur max initiale
};

#endif
