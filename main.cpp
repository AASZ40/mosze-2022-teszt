#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //NELEMENTS-be alulvonás kell
    std::cout << "1-100 ertekek duplazasa" << std::endl; //; hiányzik és nem '', hanem ""
    for (int i = 0; i < N_ELEMENTS; i++) //pontatlan léptetési ciklus
    {
        b[i] = (i + 1) * 2; //nem 0-tól, hanem 1-től kell léptetni
    }
    for (int i = 0; i < N_ELEMENTS; i++) //pontatlan léptetési ciklus
    {
        std::cout << "Ertek:" << b[i] << std::endl; //értékek kiíratása hiányzik és a ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;; //kezdőérték megadása hiányzik
    for (int i = 0; i < N_ELEMENTS; i++) //; kell , helyett
    {
        atlag += b[i]; //; hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "abc" << std::endl;
    return 0;
}
