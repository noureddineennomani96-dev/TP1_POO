// main6.cpp : TP1, Exercice 6 (C++)
#include <iostream>
#include <string>
#include <set>
#include "etudiant.hpp"

int main() {
    // Etape 1
    Etudiant a("D123456789", "Alaoui", "Sara");
    Etudiant& b = a;                                // alias (reference)
    Etudiant c("D123456789", "Alaoui", "Sara");     // doublon
    Etudiant d("R135551234", "Alaoui", "Sara");     // homonyme

    std::cout << std::boolalpha;

    // Etape 2 : identite (adresses)
    std::cout << "Identite (adresses) : &a==&b " << (&a == &b)
              << " | &a==&c " << (&a == &c)
              << " | &a==&d " << (&a == &d) << "\n";

    // Etape 2 : egalite (operator==)
    std::cout << "Egalite (==) : a==b " << (a == b)
              << " | a==c " << (a == c)
              << " | a==d " << (a == d) << "\n";

    // Etape 2 : taille de l'ensemble
    std::set<Etudiant> ensemble;
    ensemble.insert(a);
    ensemble.insert(b);
    ensemble.insert(c);
    ensemble.insert(d);
    std::cout << "Taille de l'ensemble : " << ensemble.size() << "\n";

    // Etape 4 : comparaison de chaines
    std::string s1 = "bonjour";
    std::string s2 = std::string("bon") + "jour";   // construite a l'execution
    std::cout << "s1 == s2 : " << (s1 == s2) << "\n";
    std::cout << "&s1 == &s2 : " << (&s1 == &s2) << "\n";

    const char* p1 = "bonjour";
    const char* p2 = s2.c_str();
    std::cout << "p1 == p2 (pointeurs) : " << (p1 == p2) << "\n";

    return 0;
}



