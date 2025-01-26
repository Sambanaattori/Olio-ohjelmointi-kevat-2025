#ifndef ITALIAN_CHEF_H
#define ITALIAN_CHEF_H
#include <Chef.h>
using namespace std;

class ItalianChef:public Chef
{
public:
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string, int, int);

private:
    int makePizza(int, int);
    int flour;
    int water;
    string password = "pizza";
};

#endif // ITALIAN_CHEF_H
