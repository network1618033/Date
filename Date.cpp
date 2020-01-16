/*
 * Programmeur  :   Jonathan ZOGONA
 * Date         :   30 Septembre 2019
 *
 * But          :   Créer une classe Date.
 */


#include "Date.h"

// Constructeurs
Date::Date()
{
	time_t now = time(nullptr);

	struct tm time_info;

	if (localtime_s(&time_info, &now) == 0)
	{
		this->jour = time_info.tm_mday;
		this->mois = time_info.tm_mon + 1;
		this->annee = time_info.tm_year + 1900;
	}
	else
	{
		this->jour = 1;
		this->mois = 1;
		this->annee = 1970;
	}
}

Date::Date(int pJour, int pMois, int pAnnee)
{
	setJour(pJour);
	setMois(pMois);
	setAnnee(pAnnee);
}

Date::~Date(){}

// Setteurs
bool Date::setJour(int pJour)
{
	bool worked = true;
	if (pJour < 1 || pJour > 31)
	{
		time_t now = time(nullptr);

		struct tm time_info;

		if (localtime_s(&time_info, &now) == 0)
		{
			this->jour = time_info.tm_mday;
		}
		else
		{
			this->jour = 1;
		}
		worked = false;
	}
	else
	{
		this->jour = pJour;
	}

	return worked;
}

bool Date::setMois(int pMois)
{
	bool worked = true;
	if (pMois < 1 || pMois > 12)
	{
		time_t now = time(nullptr);

		struct tm time_info;

		if (localtime_s(&time_info, &now) == 0)
		{
			this->mois = time_info.tm_mon + 1;
		}
		else
		{
			this->mois = 1;
		}
		worked = false;
	}
	else
	{
		this->mois = pMois;
	}

	return worked;
}

bool Date::setAnnee(int pAnnee)
{
	this->annee = pAnnee;

	return true;
}


// Getteurs
int Date::getJour() const
{
	return this->jour;
}


int Date::getMois() const
{
	return this->mois;
}

int Date::getAnnee() const
{
	return this->annee;
}

// Fonctions usuelles
void Date::afficher() const
{
	cout << this->jour << "/" << this->mois << "/" << this->annee << endl;
}