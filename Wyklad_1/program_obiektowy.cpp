#include <iostream>
using namespace std;
// to jest klasa za pomoca slowa kluczowego struct, zawiera ona trzy dane skladowe 
// imie nazwisko i place 
// oraz dwie funkcje skladowe, wpisz i wyswietl
struct Pracownik
{

    string imie;
    string nazwisko;
    float placa;

    void wpisz()
    {
        cout << endl;
        cout << "Podaj imie: ";
        cin>>imie;
        cout << "Podaj nazwisko: ";
        cin>>nazwisko;
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
    Pracownik p; // p jest obiektem klasy pracownik, to oznacza ze w p  siedzi mie, nazwisko i placa oraz metoda wpisz i wyswietl
    p.wpisz();
    p.wyswietl();
    cout << endl << "Imie pracownik p: " << p.imie;
    return 0;

}