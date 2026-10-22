// main5.cpp : TP1, Exercice 5 (C++)
#include <iostream>
#include "etudiant.hpp"

// Étape 3, version 1 : passage par valeur (copie de l'étudiant)
void bonusValeur(Etudiant e) {
    e.ajouterNote(20);
}

// Étape 3, version 2 : passage par référence
void bonusReference(Etudiant& e) {
    e.ajouterNote(20);
}

int main() {
    // Étape 1 : affectation (copie en C++)
    Etudiant e1("D123456789", "Alaoui", "Sara");
    e1.ajouterNote(12);
    Etudiant e2 = e1;
    e2.ajouterNote(15);
    std::cout << "Etape 1 : " << e1.nombreNotes() << " " << e2.nombreNotes() << "\n";

    // Étape 2 : comportement inverse (partage grâce à la référence)
    Etudiant& e3 = e1;
    e3.ajouterNote(18);
    std::cout << "Etape 2 : " << e1.nombreNotes() << " " << e3.nombreNotes() << "\n";

    // Étape 3 : passage de paramètre
    bonusValeur(e1);
    std::cout << "Etape 3 (valeur)    : " << e1.nombreNotes() << "\n";
    bonusReference(e1);
    std::cout << "Etape 3 (reference) : " << e1.nombreNotes() << "\n";

    return 0;
}






