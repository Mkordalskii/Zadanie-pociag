#include "Pasazer.h"
#include "Wagon.h"
#include <vector>
int main() {
	Pasazer pasazer1("pasazer1", "pasazer1", 18);
	Pasazer pasazer2("pasazer2", "pasazer2", 66);
	Pasazer pasazer3("pasazer3", "pasazer3", 20);

	Wagon wagon1(2);
	wagon1.dodajPasazera(pasazer1);
	wagon1.dodajPasazera(pasazer2);
	wagon1.dodajPasazera(pasazer3);

	wagon1.wyswietlInformacjeOwagonie();
	std::cout << std::endl << "Ilosc osob ze znizka seniora: " << wagon1.IleZeZnizkaSeniora() << std::endl;
	return 0;
}