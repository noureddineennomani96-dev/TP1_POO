# main4.py : programme principal de test
from etudiant import Etudiant

e = Etudiant("D123456789", "Alaoui", "Sara")
e.ajouter_note(12.5)
e.ajouter_note(9.0)
e.ajouter_note(14.0)

print(e)
print("Nombre de notes :", e.nombre_notes())
print(f"Moyenne : {e.moyenne():.2f}")
print("Admis :", e.est_admis())

try:
    e.ajouter_note(25)
except ValueError as err:
    print("Erreur :", err)


