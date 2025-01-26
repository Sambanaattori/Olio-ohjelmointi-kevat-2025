#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef
{
public:
    Chef();
    Chef(string);
    virtual ~Chef();  //virtual estää muistivuodon
    string getName();
    int makeSalad(int);
    int makeSoup(int);
protected:
    string chefName;
};

#endif // CHEF_H
