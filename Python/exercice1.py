# exercice1.py : TP1, Exercice 3 (Python)
def moyenne(notes):
    return sum(notes) / len(notes)

def mention(m):
    if m >= 16:
        return "Très bien"
    elif m >= 14:
        return "Bien"
    elif m >= 12:
        return "Assez bien"
    elif m >= 10:
        return "Passable"
    else:
        return "Ajourné"

# Étape 2 : collection de notes
notes = [12.5, 9.0, 14.0, 16.5]

# Étape 3 : parcourir la collection, afficher chaque note et son rang, puis la moyenne
for i, note in enumerate(notes, start=1):
    print(f"Note {i} : {note}")

m = moyenne(notes)
print(f"Moyenne : {m:.2f} ({mention(m)})")

# Étape 4 : ajouter 11.0, afficher le nombre de notes et la nouvelle moyenne
notes.append(11.0)
print(f"{len(notes)} notes, moyenne : {moyenne(notes):.2f}")

# Étape 5 : accès hors limites (11e élément, indice 10)
try:
    print(notes[10])
except IndexError as e:
    print("Erreur :", e)




    