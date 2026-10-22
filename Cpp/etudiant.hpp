// etudiant.hpp : TP1, Exercice 4 (C++)
#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP
#include <string>
#include <vector>
#include <stdexcept>
#include <sstream>

class Etudiant {
public:
    static const double SEUIL_VALIDATION;

private:
    std::string cne;
    std::string nom;
    std::string prenom;
    std::vector<double> notes;

public:
    Etudiant(const std::string& cne, const std::string& nom, const std::string& prenom)
        : cne(cne), nom(nom), prenom(prenom) {}

    void ajouterNote(double note) {
        if (note < 0 || note > 20) {
            std::ostringstream oss;
            oss << "La note doit appartenir a [0, 20] : " << note;
            throw std::invalid_argument(oss.str());
        }
        notes.push_back(note);
    }

    int nombreNotes() const {
        return (int) notes.size();
    }

    double moyenne() const {
        if (notes.empty()) {
            return 0.0;
        }
        double s = 0;
        for (size_t i = 0; i < notes.size(); i++) {
            s += notes[i];
        }
        return s / notes.size();
    }

    bool estAdmis() const {
        return moyenne() >= SEUIL_VALIDATION;
    }

    std::string affichage() const {
        return "Etudiant " + cne + " : " + prenom + " " + nom;
    }

    // Exercice 6, étape 3 : égalité fondée sur le CNE
    bool operator==(const Etudiant& autre) const {
        return cne == autre.cne;
    }

    bool operator<(const Etudiant& autre) const {
        return cne < autre.cne;
    }
};

const double Etudiant::SEUIL_VALIDATION = 10.0;

#endif
