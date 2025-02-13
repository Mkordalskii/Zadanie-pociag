#pragma once
#include <vector>
class Wagon
{
private:
	int maxMiejsc;
	std::vector<Pasazer> listaPasazerow;
public:
	Wagon(int maxMiejsc)
		:maxMiejsc(maxMiejsc) {}
	int getMaxMiejsc() const
	{
		return maxMiejsc;
	}
	void setMaxMiejsc(int maxMiejsc)
	{
		this->maxMiejsc = maxMiejsc;
	}
	bool dodajPasazera(const Pasazer& pasazer)
	{
		if (listaPasazerow.size() < maxMiejsc)
		{
			listaPasazerow.push_back(pasazer);
			return true;
		}
		else
		{
			std::cout << "Wagon jest pelny" << std::endl;
			return false;
		}
	}
	void wyswietlListePasazerow() const
	{
		std::cout << "Lista pasazerow:" << std::endl;
		for (const auto& pasazer : listaPasazerow)
		{
			pasazer.wyswietl();
		}
	}
	void wyswietlInformacjeOwagonie()
	{
		std::cout << "Maksymalna liczba pasazerow: " << maxMiejsc << std::endl;
		std::cout << "Aktualna liczba pasazerow: " << listaPasazerow.size() << std::endl;
		wyswietlListePasazerow();
	}
	int IleZeZnizkaSeniora()
	{
		int liczbaUpowaznionych = 0;
		for (const auto &pasazer : listaPasazerow)
		if (pasazer.getWiek() >= 65)
		{
			liczbaUpowaznionych++;
		}
		return liczbaUpowaznionych;
		
	}
};