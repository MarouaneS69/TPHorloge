/**
 * @file CHorlogeDigitale.h
 * @brief La classe permet la crée complete avec l'implementation de la classe CCompteurDigital.
 * @author Marouane Serradj
 * @version v1.0.0
 * @class CHorlogeDigitale
 * @date 28/09/2023
 */
#ifndef CHORLOGEDIGITALE_H
#define CHORLOGEDIGITALE_H
#include "CCompteurDigital.h"

class CHorlogeDigitale {

private:
    CCompteurDigital *ptrheure; //!< "*" = pointeur sur l'objet CCompteur
    CCompteurDigital *ptrminutes; //!< "*" = pointeur sur l'objet CCompteur

public:
	/**
	 * Permet de faire évoluer la valeur du temps
	 */
	void OnTopHorloge();

    string getTime();

	CHorlogeDigitale();
    ~CHorlogeDigitale();
};

#endif
