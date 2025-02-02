#include "asiakas.h"

Asiakas::Asiakas(string nimi, double luottoRaja)
    : nimi(nimi), kayttotili(nimi), luottotili(nimi, luottoRaja)
{}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "Asiakas: " << nimi << endl;
    cout << "Kayttotili saldo: " << kayttotili.getBalance() << " EUR" << endl;
    cout << "Luottotili saldo: " << luottotili.getBalance() << " EUR" << endl << endl;
}

bool Asiakas::talletus(double amount) {
    return kayttotili.deposit(amount);
}

bool Asiakas::nosto(double amount) {
    return kayttotili.withdraw(amount);
}

bool Asiakas::luotonMaksu(double amount) {
    return luottotili.deposit(amount);
}

bool Asiakas::luotonNosto(double amount) {
    return luottotili.withdraw(amount);
}
bool Asiakas::tilinSiirto(double transferAmount, Asiakas &vastaanottaja)
{
    if(!nosto(transferAmount))
    {
        cout << "Ei tarpeeksi rahaa" << endl;
        return false;
    }

    if (transferAmount <= 0)
    {
        cout << "Et voi ryostaa ketaan tilisiirrolla!" << endl;
        return false;
    }
    vastaanottaja.talletus(transferAmount);
    cout << nimi << " siirtaa " << transferAmount << " euroa henkilolle: " << vastaanottaja.getNimi() << endl;
    return true;
}
