# main5.py : TP1, Exercice 5 (Python)
import copy
from etudiant import Etudiant

# Étape 1 : affectation
e1 = Etudiant("D123456789", "Alaoui", "Sara")
e1.ajouter_note(12)
e2 = e1
e2.ajouter_note(15)
print("Étape 1 :", e1.nombre_notes(), e2.nombre_notes())
print("e1 et e2 désignent le même objet :", e1 is e2)

# Étape 2 : copie indépendante (Python a montré un partage à l'étape 1)
e3 = copy.deepcopy(e1)
e3.ajouter_note(18)
print("Étape 2 :", e1.nombre_notes(), e3.nombre_notes())

# Étape 3 : passage de paramètre
def bonus(e):
    e.ajouter_note(20)

bonus(e1)
print("Étape 3 :", e1.nombre_notes())