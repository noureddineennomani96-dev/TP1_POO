# main6.py : TP1, Exercice 6 (Python)
from etudiant import Etudiant

# Étape 1
a = Etudiant("D123456789", "Alaoui", "Sara")
b = a                                            # alias
c = Etudiant("D123456789", "Alaoui", "Sara")     # doublon
d = Etudiant("R135551234", "Alaoui", "Sara")     # homonyme

# Étape 2 : identité (is), égalité (==), taille de l'ensemble
print("Identité :  a is b =", a is b, "| a is c =", a is c, "| a is d =", a is d)
print("Égalité  : a == b =", a == b, "| a == c =", a == c, "| a == d =", a == d)
print("Taille de l'ensemble :", len({a, b, c, d}))

# Étape 4 : comparaison de chaînes
s1 = "bonjour"
s2 = "".join(["bon", "jour"])     # construite à l'exécution
print("s1 is s2 :", s1 is s2)
print("s1 == s2 :", s1 == s2)