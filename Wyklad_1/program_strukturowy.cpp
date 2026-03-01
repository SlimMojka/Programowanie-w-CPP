#include <iostream>
using namespace std;
// to jest program strukturalny
struct Pracownik
{

    string imie;
    string nazwisko;
    float placa;

};


// parametry do funkcji mozna przekazywac przez
// zmienna, funkcja(pracownik p)
// wskaznik, funkcja(pracownik* p)
// referencje, funkcja(pracownik& p)
void wpisz(Pracownik& p) // jesli poprzez wskaznik to zamiast p.nazwisko jest p->nazwisko
{
    cout << endl;
    cout << "Podaj imie: ";
    cin>>p.imie;
    cout << "Podaj nazwisko: ";
    cin>>p.nazwisko;
    cout << "Podaj placa: ";
    cin>>p.placa;
}

void wyswietl(Pracownik p)
{
    cout << endl;
    cout << endl << "Imie; " << p.imie;
    cout << endl << "Nazwisko; " << p.nazwisko;
    cout << endl << "Placa; " << p.placa;
}

int main()
{

    cout << "\n";
    Pracownik p;
    wpisz(p);
    wyswietl(p);

    return 0;

}