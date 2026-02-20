#include <iostream>

using namespace std;

int main()
{

    int cale;
    float przelicznik = 2.54;
    float centymetry;

    cout << "\n";
    cout << "Podaj ilosc cali: ";
    cin >> cale;

    centymetry = cale * przelicznik;

    cout << cale << " cali to: " << centymetry << " centymetrow";


    return 0;

}