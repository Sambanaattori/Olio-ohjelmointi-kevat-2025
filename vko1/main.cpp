#include <iostream>

using namespace std;

int game(int maxnum);

int main()
{
    int arvaukset = 0;
    int maxnum = 125;
    arvaukset = game(maxnum);
    cout << "Arvauksia:" << arvaukset << endl;
    return 0;
}

int game(int maxnum){
    int arvaukset = 0;
    int satunnaisluku = 0;
    int arvaus = 0;

    cout << "Maxnum =" << maxnum << endl;

    srand(time(NULL));
    satunnaisluku = rand() % 40;

        while (true) {
            cout << "Anna luku:" << endl;
            cin >> arvaus;
            arvaukset++;
            if(arvaus == satunnaisluku){
                cout << "Oikein arvattu!" << endl;
                break;
            }
            if(arvaus < satunnaisluku){
                cout << "Luku on suurempi" << endl;
            }
            if(arvaus > satunnaisluku){
                cout << "Luku on pienempi" << endl;
            }
        }
    return arvaukset;
}
