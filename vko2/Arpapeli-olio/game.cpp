#include <iostream>
#include <game.h>
using namespace std;

Game::Game(int)
{
    maxNum = 100;
    cout << "Peli luotu maksimiarvolla " << maxNum << endl << endl;
}

Game::~Game()
{
    maxNum = 0;
    cout << endl <<"Peli tuhottu ja maksimiarvo nollattu" << endl;
}

void Game::printGameResult()
{
    std::cout << endl << "Oikea numero oli: " << randNum << endl;
    std::cout << "Pelaajan arvaukset: " << numOfGuesses << endl;
}

void Game::play()
{
    srand(time(NULL));
    randNum = rand() % maxNum;
    cout << "Arvaa luku asteikolla 0 - " << maxNum << endl;

    while (true)
    {
        cout << "Anna luku:" << endl;
        cin >> playerGuess;
        numOfGuesses ++;
        if(playerGuess == randNum)
        {
            cout << "Oikein arvattu!" << endl;
            printGameResult();
            break;
        }
        if(playerGuess < randNum)
        {
            cout << "Luku on suurempi" << endl;
        }
        if(playerGuess > randNum)
        {
            cout << "Luku on pienempi" << endl;
        }
    }
}
