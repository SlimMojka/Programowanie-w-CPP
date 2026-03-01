#include <iostream>
using namespace std;

class Pracownik
{
    private: // jest prywatne czyli nie moze byc uzyte poza klasa
    string imie;
    string nazwisko;
    float placa;

    public: // jest publiczne czyli moze byc uzywane poza klasa
    void wpisz()
    {
        cout << endl;
        cout << "Podaj imie: ";
        cin>> imie;
        cout << "Podaj nazwisko: ";
        cin>> nazwisko;
        cout << "Podaj placa: ";
        cin>>placa;
    }

    void wyswietl()
    {
        cout << endl;
        cout << endl << "Imie; " << imie;
        cout << endl << "Nazwisko; " << nazwisko;
        cout << endl << "Placa; " << placa;
    }


}; // tu jest koniec klasy


int main()
{

    cout << "\n";
    Pracownik p; 
    p.wpisz();
    p.wyswietl();

    return 0;

}