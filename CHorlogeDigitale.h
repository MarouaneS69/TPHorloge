#ifndef CHORLOGEDIGITALE_H
#define CHORLOGEDIGITALE_H

class CHorlogeDigitale {

private:
	CCompteurDigital heure;
	CCompteurDigital minutes;

public:
	/**
	 * Permet de faire �voluer la valeur du temps
	 */
	void OnTopHorloge();

	void getTime();

	CHorlogeDigitale();
};

#endif
