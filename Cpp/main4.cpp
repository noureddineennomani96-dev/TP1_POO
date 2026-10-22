// main4.cpp : programme principal de test
#include <iostream>
#include <iomanip>
#include "etudiant.hpp"

int main() {
    Etudiant e("D123456789", "Alaoui", "Sara");
    e.ajouterNote(12.5);
    e.ajouterNote(9.0);
    e.ajouterNote(14.0);

    std::cout << e.affichage() << "\n";
    std::cout << "Nombre de notes : " << e.nombreNotes() << "\n";
    std::cout << std::fixed << std::setprecision(2)
              << "Moyenne : " << e.moyenne() << "\n";
    std::cout << std::boolalpha << "Admis : " << e.estAdmis() << "\n";

    try {
        e.ajouterNote(25);
    } catch (const std::invalid_argument& ex) {
        std::cout << "Erreur : " << ex.what() << "\n";
    }

    return 0;
}





