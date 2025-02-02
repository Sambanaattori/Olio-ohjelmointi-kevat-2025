#include "Luottotili.h"

Luottotili::Luottotili(string omistaja, double luotto)
    : Pankkitili(omistaja), luottoRaja(luotto)
{
    cout << "Luottotili luotu " << omistaja << ":lle" << ", luottoraja: " << luottoRaja <<endl;
}

bool Luottotili::deposit(double depositAmount)
{
    if (depositAmount > 0)
    {
        cout << "Luottoa lyhennetty " << depositAmount << endl;
        this->saldo += depositAmount;
        if (saldo > 0)
        {
            saldo = 0;
        }
        cout << "Luottotililla on " << saldo << endl << endl;
        return true;
    }
    else
    {
        cout << "Luoton lyhennys ei onnistunut" << endl << endl;
        return false;
    }
}
bool Luottotili::withdraw(double withdrawAmount)
{
    if (withdrawAmount > 0 && (saldo - withdrawAmount) >= -luottoRaja)
    {
        cout << "Luottoa nostettu " << withdrawAmount << " euroa, ";
        this ->saldo -= withdrawAmount;
        cout << "Luottotililla on " << saldo << endl << endl;
        return true;
    }
    else
    {
        return false;
    }
}
