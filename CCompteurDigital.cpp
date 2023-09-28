#include "CCompteurDigital.h"

bool CCompteurDigital::incrementer()
{
    ValCPT ++;

    if (ValCPT==BorneMax)
    {
        ValCPT=0;
        return true;
    }
    cout << ValCPT << endl;
    return false;
}


std::string CCompteurDigital::GetValCPT()
{
    string valcpt_string;
    valcpt_string=to_string(ValCPT);
    return valcpt_string;

}

int CCompteurDigital::GetValCPTint()
{

    return ValCPT;

}

CCompteurDigital::CCompteurDigital(/* valeur max initiale */int pBorneMax)
{
    this->ValCPT = 0;
    this->BorneMax = pBorneMax;
}
