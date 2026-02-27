#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string imie;
    string nazwisko;
    int wiek;
    bool pelnoletni;

    string age_val_1 = "Pelnoletni";
    string age_val_2 = "Niepelnoletni";

    cout << "\n";
    cout << "Ile masz lat? : ";
    cin >> wiek;
    cout << "Jak masz na imie? : ";
    cin >> imie;
    cout << "Podaj swoje nazwisko: ";
    cin >> nazwisko;

    if(wiek<18)
        pelnoletni = false;
    else
        pelnoletni = true;

    for(int i=0; i<20; i++)
    {
        for(int k=0; k<20; k++)
        {
            if(i == 0 || i == 19)
                cout << " # ";
            else if( ( i>0 && i<19 ) && k==0 || k==19)
                cout << " # ";
            else 
            {
                cout << "   ";
                if(i==9 && k==3)
                {

                    cout << imie << " " << nazwisko << " - ";
                    if(pelnoletni==true)
                        cout << "Pelnoletni";
                    else 
                        cout << "Niepelnoletni";
                }

            }
        }
        cout << "\n";
    }

    return 0;
}