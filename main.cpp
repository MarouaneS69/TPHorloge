#include "CCompteurDigital.h"
#include <iostream>

using namespace std;

int main()
{

    CCompteurDigital m(60);
    CCompteurDigital h(24);
    unsigned short CPT = 1;

    /*cout << CPT++ << endl;
    cout << CPT << endl;
    cout << CPT++ << endl;
    cout << CPT << endl;
    cout << CPT++ << endl;
    cout << CPT << endl;*/

    while(CPT<60){
    CPT++;
    m.incrementer();
    h.incrementer();
    }

    return 0;
}
