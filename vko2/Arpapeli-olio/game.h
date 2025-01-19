#ifndef GAME_H
#define GAME_H

class Game
{
    public:
        Game(int);
        ~Game();
        void play();

    // En saanut pelejä toimimaan kun muuttujat olivat private osiossa
    // Ohjelma ei pystynyt lukemaan niitä jostain syystä?

        //private:
        int maxNum;
        int playerGuess;
        int randNum;
        int numOfGuesses;
        void printGameResult();
};

#endif // GAME_H
