// Exercice1.java : TP1, Exercice 3 (Java)
import java.util.ArrayList;
import java.util.Locale;

public class Exercice1 {

    static double moyenne(ArrayList<Double> notes) {
        double s = 0;
        for (double n : notes) {
            s += n;
        }
        return s / notes.size();
    }

    static String mention(double m) {
        if (m >= 16) {
            return "Très bien";
        } else if (m >= 14) {
            return "Bien";
        } else if (m >= 12) {
            return "Assez bien";
        } else if (m >= 10) {
            return "Passable";
        } else {
            return "Ajourné";
        }
    }

    public static void main(String[] args) {
        // Étape 2 : collection de notes
        ArrayList<Double> notes = new ArrayList<>();
        notes.add(12.5);
        notes.add(9.0);
        notes.add(14.0);
        notes.add(16.5);

        // Étape 3 : parcourir la collection, afficher chaque note et son rang, puis la moyenne
        for (int i = 0; i < notes.size(); i++) {
            System.out.println("Note " + (i + 1) + " : " + notes.get(i));
        }
        double m = moyenne(notes);
        System.out.println(String.format(Locale.US, "Moyenne : %.2f (%s)", m, mention(m)));

        // Étape 4 : ajouter 11.0, afficher le nombre de notes et la nouvelle moyenne
        notes.add(11.0);
        System.out.println(notes.size() + " notes, moyenne : "
                + String.format(Locale.US, "%.2f", moyenne(notes)));

        // Étape 5 : accès hors limites (11e élément, indice 10)
        try {
            System.out.println(notes.get(10));
        } catch (IndexOutOfBoundsException e) {
            System.out.println("Erreur : " + e.getMessage());
        }
    }
}