#include <iostream>
#include <chef.h>
#include <italian_chef.h>
using namespace std;

int main()
{
    //Constructed a chef called mynameis and it is given name "Jeff"
    Chef mynameis("Jeff");
    cout << "Chef " << mynameis.getName() << " has started his shift" << endl;
    int saladAmount = mynameis.makeSalad(45);
    cout << "Chef " << mynameis.getName() << " was able to make " << saladAmount << " salads from given engredients" << endl;
    int soupAmount = mynameis.makeSoup(15);
    cout << "Chef " << mynameis.getName() << " was able to make " << soupAmount << " soups from given engredients" << endl;;

    //Constructed a ItalianChef called Siffredi and it give name "Rocco"
    ItalianChef Siffredi("Rocco");
    cout << "Italian chef " << Siffredi.getName() << " is not impressed and tries to remember Papa's old recipe" << endl;
    //Give password to gain acces to makePizza()
    Siffredi.askSecret("pizza", 30, 60);

    return 0;
}
