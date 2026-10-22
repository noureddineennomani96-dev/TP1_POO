// main7.cpp : TP1, Exercice 7 (C++)
#include <iostream>
#include <chrono>

int main() {
    const int N = 10000000;

    auto debut = std::chrono::steady_clock::now();
    long long somme = 0;
    for (int i = 0; i < N; i++) {
        somme += i % 7;
    }
    auto fin = std::chrono::steady_clock::now();

    std::chrono::duration<double, std::milli> duree = fin - debut;

    std::cout << "Somme : " << somme << "\n";
    std::cout << "Duree : " << duree.count() << " ms\n";

    return 0;
}



