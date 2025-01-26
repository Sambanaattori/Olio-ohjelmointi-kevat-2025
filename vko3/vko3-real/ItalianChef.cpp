#include <iostream>
#include <italian_chef.h>

using namespace std;

ItalianChef::ItalianChef(string name) : Chef(name)
{
    //Constructor
    cout << "Italian chef " << chefName << " has started working" << endl;
}

ItalianChef::~ItalianChef()
{
    //Destructor
    cout << "The italian chef " << chefName << " is done working" <<endl;
}

int ItalianChef::makePizza(int flour, int water)
{
    int pizzas = min(flour/5, water/5);
    cout << "Italian chef" << chefName << "has started making pizzas" << endl;
    cout << "There will be " << pizzas << " pizzas made with the provided ingredients" << endl;
    return pizzas;
}

bool ItalianChef::askSecret(string secret, int flour, int water)
{
    if(secret == password)
        {
            cout << chefName << "'s memory floods with memories of papa luigi's pizza recipe and he starts making pizzas" << endl;
            makePizza(flour, water);
            return true;
        }
    else
        {
            cout << "This sparks no joy in chef "<< chefName << ". He loses the mental battle..." << endl;
            return false;
        }
}
