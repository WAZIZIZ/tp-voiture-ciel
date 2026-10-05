#ifndef VOITURE_H
#define VOITURE_H

#include <string> 

class CVoiture {
private:
    std::string carburant;
    std::string marque;
    std::string modele;
    int puissance;
    int vitesse;

public:
    CVoiture(std::string p_marque, std::string p_modele, int p_puissance, std::string p_carburant);
    void demarrer();
    void accelerer(int valeur);
    void ralentir(int valeur);
    void arreter();
    void afficher();
};

#endif
