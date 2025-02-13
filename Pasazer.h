#pragma once
#include <iostream>
class Pasazer
{
private:
	std::string imie;
	std::string nazwisko;
	int wiek;
public:
	Pasazer(std::string imie, std::string nazwisko, int wiek)
		:imie(imie),nazwisko(nazwisko),wiek(wiek){}

	void wyswietl() const 
	{
		std::cout << std::endl << "imie: " << imie;
		std::cout << std::endl << "nazwisko: " << nazwisko;
		std::cout << std::endl << "wiek: " << wiek;
	}
	int getWiek() const
	{
		return wiek;
	}
};