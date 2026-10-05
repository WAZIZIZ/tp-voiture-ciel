#include "voiture.h"
#include <iostream>

CVoiture::CVoiture(std::string p_marque, std::string p_modele, int p_puissance, std::string p_carburant) {
    marque = p_marque;
    modele = p_modele;
    puissance = p_puissance;
    carburant = p_carburant;
    vitesse = 0;
}

void CVoiture::demarrer ()  {
    std::cout << "La voiture demarre. " << std::endl;
}

void CVoiture::accelerer(int valeur) {
    vitesse += valeur;
}

void CVoiture::ralentir(int valeur) {
    vitesse -= valeur;
    if (vitesse < 0) vitesse = 0;
}

void CVoiture::arreter() {
    vitesse = 0;
    std::cout << "La voiture est arretee." << std::endl;
}

void CVoiture::afficher() {
    std::cout << "Voiture: " << marque << " " << modele 
              << " | Puissance: " << puissance << " ch"
	      << " | Carburant: " << carburant
              << " | Vitesse; " << vitesse << " km/h" << std::endl;
}

