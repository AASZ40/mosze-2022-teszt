#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //NELEMENTS-be alulvonás kell
    std::cout << '1-100 ertekek duplazasa' //; hiányzik és nem '', hanem ""
    for (int i = 0;) //pontatlan léptetési ciklus
    {
        b[i] = i * 2; //nem 0-tól, hanem 1-től kell léptetni
    }
    for (int i = 0; i; i++) //pontatlan léptetési ciklus
    {
        std::cout << "Ertek:" //értékek kiíratása hiányzik és a ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //kezdőérték megadása hiányzik
    for (int i = 0; i < N_ELEMENTS, i++) //; kell , helyett
    {
        atlag += b[i] //; hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
