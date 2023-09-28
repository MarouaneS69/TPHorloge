#include "CHorlogeDigitale.h"

void CHorlogeDigitale::OnTopHorloge() {
    // TODO - implement CHorlogeDigitale::OnTopHorloge
    throw "Not yet implemented";
}

string CHorlogeDigitale::getTime()
{
    string affichage;
    string minutes;
    string heure;


    //affichage_string=to_string(minutes);
    //affichage_string=to_string(heure);
    return affichage;
}

CHorlogeDigitale::CHorlogeDigitale()
{
    ptrheure = new CCompteurDigital(24);
    ptrminutes = new CCompteurDigital(60);

}

CHorlogeDigitale::~CHorlogeDigitale()
{
    delete ptrheure;
    delete ptrminutes;

}
