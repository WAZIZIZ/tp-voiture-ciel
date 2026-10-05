#include "voiture.h"

int main() {
    CVoiture maVoiture("Peugeot", "206", 75, "Essence");
    maVoiture.afficher();
    maVoiture.demarrer();
    maVoiture.accelerer(50);
    maVoiture.afficher();
    maVoiture.ralentir(20);
    maVoiture.afficher();
    maVoiture.arreter();
    return 0;
}
