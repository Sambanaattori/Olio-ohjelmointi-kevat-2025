#include <iostream>
#include <chef.h>
using namespace std;


Chef::Chef(string name) : chefName(name)
{
    //Constructor
    cout<< endl << "A new chef is in town" << endl;
}

Chef::~Chef()
{
    //Destructor
    cout << "Chef " << chefName << " is done working" << endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int ingredients)
{
    cout << "Making salad with " << ingredients << " ingredients" << endl;
    return ingredients /5;
}

int Chef::makeSoup(int ingredients)
{
    cout << "Making soup with " << ingredients << " ingredients" << endl;
    return ingredients /3;
}

/*int Chef::makeSalad(int saladIngredients)
{
    cout << "The chef is makeing a salad" << endl;
    cout << "How many salad ingredients does the chef have?" << endl;
    cin >> saladIngredients;
    int saladAmount = saladIngredients / 5;
    cout << "The chef made " << saladAmount << " salads" << endl;

    return saladAmount;
}

int Chef::makeSoup(int soupIngredients)
{
    cout << "The chef is making a soup" << endl;
    cout << "How many soup ingredients does chef "<< chefName << " have?"<< endl;
    cin >> soupIngredients;
    int soupAmount = soupIngredients / 3;
    cout << "The chef made " << soupAmount << " soups" << endl;
    return soupAmount;
}
*/
