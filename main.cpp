#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int liczba=0, zgadywana, proba=1;
    cout << "Witam! Pomyslalem liczbe w zakresie od 1 do 100" << endl;

    srand(time(NULL));      //losowanie
    liczba = rand()%100+1;  //losowanie

    while (liczba != zgadywana)
    {
        cout << "Zgaduj! od 1 do 100." << endl; cin >> zgadywana;

        //cout << liczba;
        if (liczba < zgadywana)
        {
            cout << "Pudlo! Za duzo" << endl;
            cout << "To Twoja " << proba << ". próba!" << endl;
        }
        if (liczba > zgadywana)
        {
            cout << "Pudlo! Za malo" << endl;
            cout << "To Twoja " << proba << ". próba!" << endl;
        }
        if (liczba == zgadywana)
        {
            cout << "Zgadles!" << endl;
            cout << "Zgadles w " << proba << ". probie!" << endl;
        }
        proba = proba + 1;
    }
    system ("pause");
    return 0;
}
