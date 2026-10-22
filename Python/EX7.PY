import time

debut = time.perf_counter()

somme = 0
for i in range(10**7):
    somme += i % 7


fin = time.perf_counter()

print("Somme :", somme)
print("Temps :", (fin - debut) * 1000, "ms")





