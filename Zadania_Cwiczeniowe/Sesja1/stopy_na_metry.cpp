#include <iostream>

using namespace std;

int main()
{
    float h_stopy;
    float h_metry;

    cout << "\n";
    cout << "Podaj wysokosc w stopach: ";
    cin >> h_stopy;

    h_metry = ( h_stopy * 30.48 ) / 100.0;

    cout << h_stopy << " stopy to: " << h_metry << " metra/metrow." << endl;

    return 0;
    
}