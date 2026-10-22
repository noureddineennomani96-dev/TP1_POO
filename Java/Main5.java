// Main5.java : TP1, Exercice 5 (Java)
public class Main5 {

    // Étape 3 : passage de paramètre
    static void bonus(Etudiant e) {
        e.ajouterNote(20);
    }

    public static void main(String[] args) {
        // Étape 1 : affectation
        Etudiant e1 = new Etudiant("D123456789", "Alaoui", "Sara");
        e1.ajouterNote(12);
        Etudiant e2 = e1;
        e2.ajouterNote(15);
        System.out.println("Étape 1 : " + e1.nombreNotes() + " " + e2.nombreNotes());
        System.out.println("e1 et e2 désignent le même objet : " + (e1 == e2));

        // Étape 2 : copie indépendante via le constructeur de copie
        Etudiant e3 = new Etudiant(e1);
        e3.ajouterNote(18);
        System.out.println("Étape 2 : " + e1.nombreNotes() + " " + e3.nombreNotes());

        // Étape 3 : passage de paramètre
        bonus(e1);
        System.out.println("Étape 3 : " + e1.nombreNotes());
    }
}




