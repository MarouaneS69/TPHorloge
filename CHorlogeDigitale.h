#ifndef CHORLOGEDIGITALE_H
#define CHORLOGEDIGITALE_H
#include "CCompteurDigital.h"

class CHorlogeDigitale {

private:
    CCompteurDigital *ptrheure; // "*" = pointeur sur l'objet CCompteur
    CCompteurDigital *ptrminutes; //"*" = pointeur sur l'objet CCompteur

public:
	/**
	 * Permet de faire évoluer la valeur du temps
	 */
	void OnTopHorloge();

    string getTime();

	CHorlogeDigitale();
};

#endif
