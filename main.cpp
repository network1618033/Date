/*
 * Programmeur  :   Jonathan ZOGONA
 * Date         :   30 Septembre 2019
 *
 * But          :   Créer une classe Date.
 */

#include<cstdlib>

#include"Date.h"

using namespace std;

int main()
{
	Date* dateDAujourdhui = new Date();					// Pour test de constructeur par defaut
	Date* dateDeNoel = new Date(25, 12, 2019);			// Pour test de constructeur par paramètre
	Date* dateQuelconque = new Date(13, 13, 2013);		// Pour usage de test des setteurs

	
	/************	TEST DES CONSTRUCTEURS		*********/	
	cout << "Date d'aujourd'hui : ";
	dateDAujourdhui->afficher();
	cout << "Date de Noel : ";
	dateDeNoel->afficher();

	/************	TEST DES GETTEURS		*********/
	cout << endl << "*************  Valeurs separees de la date d'aujourd'hui(test des getteurs)  ************" << endl << endl;
	cout << "Jour - " << dateDAujourdhui->getJour() << endl;
	cout << "Mois - " << dateDAujourdhui->getMois() << endl;
	cout << "Annee - " << dateDAujourdhui->getAnnee() << endl;

	/************	TEST DES SETTEURS		*********/
	cout << endl << "*************  Test des setteurs  ************" << endl << endl;
	cout << endl << "Date quelconque : ";
	dateQuelconque->afficher();
	cout << endl;
	if(dateQuelconque->setJour(42))
		cout << "La valeur du jour a ete bien mis à jour" << endl;
	else
		cout << "La valeur du jour n'a pas ete bien mis à jour. Il contient donc la valeur du jour d'aujourdui" << endl;

	if (dateQuelconque->setMois(14))
		cout << "La valeur du mois a ete bien mis à jour" << endl;
	else
		cout << "La valeur du mois n'a pas ete bien mis à jour. Il contient donc la valeur du mois courant" << endl << endl;

	cout << "La date Quelconque apres valeurs invalides pour le jour et le mois : ";
	dateQuelconque->afficher();

	cout << endl;

	if (dateQuelconque->setJour(2) && dateQuelconque->setMois(9) && dateQuelconque->setAnnee(2008))
	{
		cout << "La date a bien ete mis à jour avec les setteurs. Date actuel : ";
		dateQuelconque->afficher();
	}
		

	return EXIT_SUCCESS;
}