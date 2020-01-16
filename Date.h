/*
 * Programmeur  :   Jonathan ZOGONA
 * Date         :   30 Septembre 2019
 *
 * But          :   Créer une classe Date.
 */

#pragma once

#include<iostream>
#include <ctime>

using namespace std;

class Date
{
private:
	int jour;
	int mois;
	int annee;

public:
	Date();
	Date(int, int, int);
	~Date();
	
	// Setteurs
	bool setJour(int);
	bool setMois(int);
	bool setAnnee(int);

	// Getteurs
	int getJour() const;
	int getMois() const;
	int getAnnee() const;

	// Methodes usuelles
	void afficher() const;

};

