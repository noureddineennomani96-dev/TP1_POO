# etudiant.py : TP1, Exercice 4 (Python)
class Etudiant:
    SEUIL_VALIDATION = 10.0

    def __init__(self, cne, nom, prenom):
        self._cne = cne
        self._nom = nom
        self._prenom = prenom
        self._notes = []

    def ajouter_note(self, note):
        if note < 0 or note > 20:
            raise ValueError("La note doit appartenir à [0, 20] : " + str(note))
        self._notes.append(note)

    def nombre_notes(self):
        return len(self._notes)

    def moyenne(self):
        if len(self._notes) == 0:
            return 0.0
        return sum(self._notes) / len(self._notes)

    def est_admis(self):
        return self.moyenne() >= Etudiant.SEUIL_VALIDATION

    def __str__(self):
        return f"Etudiant {self._cne} : {self._prenom} {self._nom}"

    # Exercice 6, étape 3 : égalité fondée sur le CNE
    def __eq__(self, autre):
        if not isinstance(autre, Etudiant):
            return NotImplemented
        return self._cne == autre._cne

    def __hash__(self):
        return hash(self._cne)