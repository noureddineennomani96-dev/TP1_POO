// Main4.java : programme principal de test
import java.util.Locale;

public class Main4 {
    public static void main(String[] args) {
        Etudiant e = new Etudiant("D123456789", "Alaoui", "Sara");
        e.ajouterNote(12.5);
        e.ajouterNote(9.0);
        e.ajouterNote(14.0);

        System.out.println(e);
        System.out.println("Nombre de notes : " + e.nombreNotes());
        System.out.println(String.format(Locale.US, "Moyenne : %.2f", e.moyenne()));
        System.out.println("Admis : " + e.estAdmis());

        try {
            e.ajouterNote(25);
        } catch (IllegalArgumentException ex) {
            System.out.println("Erreur : " + ex.getMessage());
        }
    }
}