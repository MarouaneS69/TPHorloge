#include "CCompteurDigital.h"
#include "CHorlogeDigitale.h"
#include <iostream>

using namespace std;

int main()
{

    //CCompteurDigital minutes(60);
    //CCompteurDigital heure(24);
    CHorlogeDigitale affichage;
    CHorlogeDigitale horloge;

    unsigned short CPT = 0;
    unsigned short CPT2 = 0;

    /*cout << CPT++ << endl;
    cout << CPT << endl;
    cout << CPT++ << endl;
    cout << CPT << endl;
    cout << CPT++ << endl;
    cout << CPT << endl;*/

   while(true){
   horloge.OnTopHorloge();}

    /*while(CPT<60){
    CPT++;
    minutes.incrementer();
    }
    while(CPT2<24){
    CPT2++;
    heure.incrementer();
    }*/
    cout << affichage.getTime() << endl;

    return -1;
}
