#include "CHorlogeDigitale.h"

void CHorlogeDigitale::OnTopHorloge()
{
    if(ptrminutes->incrementer()==true)
        {
        ptrheure->incrementer();
        }
}

string CHorlogeDigitale::getTime()
{
    string affichage;
    string minutes;
    string heure;
    string pts=":";


    minutes=(ptrminutes->GetValCPT());
    heure=(ptrheure->GetValCPT());
    affichage = heure + pts + minutes;
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
