#include "Asiakas.h"

int main()
{
    Asiakas asiakas1("Opiskelija", 2000);

    asiakas1.talletus(624.25);
    asiakas1.luotonNosto(200);
    asiakas1.showSaldo();

    Asiakas asiakas2("Vuokranantaja", 100000);
    asiakas1.tilinSiirto(600, asiakas2);
    asiakas2.showSaldo();
    asiakas2.tilinSiirto(150, asiakas1);

    asiakas1.showSaldo();
    asiakas2.showSaldo();

    return 0;
}
