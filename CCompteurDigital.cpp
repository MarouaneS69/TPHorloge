#include "CCompteurDigital.h"

bool CCompteurDigital::incrementer() {
    ValCPT = 1;
    ValCPT ++;

}

std::string CCompteurDigital::GetValCPT() {

}

int CCompteurDigital::GetValCPTint() {

    return ValCPT;

}

CCompteurDigital::CCompteurDigital(/* valeur max initiale */int pBorneMax)
{
    this->ValCPT = 0;
    this->BorneMax = pBorneMax;
}
