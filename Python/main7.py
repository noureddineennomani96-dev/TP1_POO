# main7.py : TP1, Exercice 7 (Python)
import time

N = 10**7

debut = time.perf_counter()
somme = 0
for i in range(N):
    somme += i % 7
fin = time.perf_counter()

print("Somme :", somme)
print(f"Duree : {(fin - debut) * 1000:.1f} ms")