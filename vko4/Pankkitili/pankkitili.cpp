#include "pankkitili.h"
#include <iostream>
using namespace std;

Pankkitili::Pankkitili(string omistaja)
{
    cout << "Pankkitili luotu " << omistaja << ":lle" << endl;
}

double Pankkitili::getBalance()
{
    return this->saldo;
}

bool Pankkitili::deposit(double depositAmount)
{
    if(depositAmount > 0)
    {
        cout << "Tilille on talletettu: " << depositAmount << " euroa." << endl;
        this->saldo = getBalance() + depositAmount;
        return true;
    }
    else
    {
        cout << "Kokeile withdraw toimintoa." << endl;
        return false;
    }
}

bool Pankkitili::withdraw(double withdrawAmount)
{
    if(withdrawAmount > 0 && saldo >= withdrawAmount)
    {
        cout << "Tililtasi on nostettu: " << withdrawAmount << " euroa." << endl;
        this->saldo = getBalance() - withdrawAmount ;
        cout << "Tilisi saldo on nyt: " << this->saldo << " euroa." << endl << endl;
        return true;
    }
    else
    {
        cout << "Tililla taytyy olla rahaa jotta sita voi nostaa." << endl;
        return false;
    }
}
