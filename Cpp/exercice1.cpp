// exercice1.cpp : TP1, Exercice 3 (C++)
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <stdexcept>

double moyenne(const std::vector<double>& notes) {
    double s = 0;
    for (size_t i = 0; i < notes.size(); i++) {
        s += notes[i];
    }
    return s / notes.size();
}

std::string mention(double m) {
    if (m >= 16) {
        return "Tres bien";
    } else if (m >= 14) {
        return "Bien";
    } else if (m >= 12) {
        return "Assez bien";
    } else if (m >= 10) {
        return "Passable";
    } else {
        return "Ajourne";
    }
}

int main() {
    // Étape 2 : collection de notes
    std::vector<double> notes;
    notes.push_back(12.5);
    notes.push_back(9.0);
    notes.push_back(14.0);
    notes.push_back(16.5);

    // Étape 3 : parcourir la collection, afficher chaque note et son rang, puis la moyenne
    for (size_t i = 0; i < notes.size(); i++) {
        std::cout << "Note " << i + 1 << " : "
                  << std::fixed << std::setprecision(1) << notes[i] << "\n";
    }
    double m = moyenne(notes);
    std::cout << std::setprecision(2)
              << "Moyenne : " << m << " (" << mention(m) << ")\n";

    // Étape 4 : ajouter 11.0, afficher le nombre de notes et la nouvelle moyenne
    notes.push_back(11.0);
    std::cout << notes.size() << " notes, moyenne : " << moyenne(notes) << "\n";

    // Étape 5 : accès hors limites (11e élément, indice 10)
    try {
        std::cout << notes.at(10) << "\n";
    } catch (const std::out_of_range& e) {
        std::cout << "Erreur : " << e.what() << "\n";
    }

    return 0;
}

