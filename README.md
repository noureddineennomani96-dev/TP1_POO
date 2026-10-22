
# TP1_POO : Fondements de la programmation orientée objet

TD/TP 1 du module **Programmation Orientée Objet** (POO), filière SD-RCC, ESTK, Université Cadi Ayyad, année 2026-27.
Enseignant : Pr. Dr. BERKA Anas.

Ce TP est une prise en main comparée de trois langages : **Python**, **Java** et **C++**. Chaque exercice est réalisé dans les trois langages afin d'observer comment un même programme se comporte d'un langage à l'autre.

## Structure du dépôt

```
TP1_POO/
├── python/     # exercices en Python
├── java/       # exercices en Java
├── Cpp/        # exercices en C++
├── .vscode/    # configuration VS Code
└── README.md
```

## Contenu du TP

| Exercice | Sujet | Notions abordées |
|----------|-------|------------------|
| 0 | Préparation de l'environnement | Installation et vérification des outils |
| 1 | Premier programme | Compilation, point d'entrée, blocs, nom de fichier en Java |
| 2 | Variables, types et opérations | Typage statique et dynamique, division, dépassement d'un `int`, booléens |
| 3 | Fonctions et collections | `moyenne`, `mention`, liste / `ArrayList` / `std::vector`, accès hors limites |
| 4 | Classe `Etudiant` | Encapsulation, exceptions, constructeur, affichage d'un objet |
| 5 | Affectation, copie et passage de paramètres | Référence ou copie, constructeur de copie, passage par valeur / référence |
| 6 | Identité et égalité | `is` / `==` / `equals`, `__eq__` / `__hash__` / `hashCode`, ensembles |
| 7 (facultatif) | Mesure du temps d'exécution | `perf_counter`, `nanoTime`, `chrono`, optimisation `-O0` / `-O2` |

## Prérequis

Vérifier que les outils sont installés :

```bash
python3 --version
javac -version
java -version
g++ --version
```

## Compilation et exécution

| Langage | Traduction | Exécution |
|---------|------------|-----------|
| Python | aucune étape explicite | `python3 exercice1.py` |
| Java | `javac Exercice1.java` (produit `Exercice1.class`) | `java Exercice1` |
| C++ | `g++ -std=c++17 -Wall -Wextra exercice1.cpp -o exercice1` | `./exercice1` (`exercice1.exe` sous Windows) |

### Exercice 4 (classe `Etudiant`, plusieurs fichiers)

```bash
# Python
python3 exercice4.py

# Java
javac Etudiant.java Exercice4.java
java Exercice4

# C++ (etudiant.hpp est inclus par #include "etudiant.hpp")
g++ -std=c++17 -Wall -Wextra exercice4.cpp -o exercice4
./exercice4
```

### Exercice 2, étape 4 (C++ : détection du dépassement)

```bash
g++ -std=c++17 -Wall -Wextra -fsanitize=undefined exercice2.cpp -o exercice2
```

### Exercice 7 (C++ : optimisation)

```bash
g++ -std=c++17 -O0 exercice7.cpp -o exercice7_O0
g++ -std=c++17 -O2 exercice7.cpp -o exercice7_O2
```

## Sortie attendue (exercice 4)

```
Etudiant R130456789 : Amine El Idrissi
Moyenne : 11.83 - admis : oui
Erreur : note invalide : 25
```

## Remarques

- Les fichiers compilés (`.exe`, `.class`, `.o`) sont exclus du dépôt via le fichier `.gitignore`.
- Les noms de méthodes suivent la convention `snake_case` en Python et `camelCase` en Java et C++ (`ajouter_note` / `ajouterNote`, `est_admis` / `estAdmis`).

## Auteur

Noureddine Ennomani
GitHub : [noureddineennomani96-dev](https://github.com/noureddineennomani96-dev)
