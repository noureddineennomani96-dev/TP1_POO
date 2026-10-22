// Etudiant.java : TP1, Exercice 4 (Java)
import java.util.ArrayList;

public class Etudiant {
    public static final double SEUIL_VALIDATION = 10.0;

    private String cne;
    private String nom;
    private String prenom;
    private ArrayList<Double> notes;

    public Etudiant(String cne, String nom, String prenom) {
        this.cne = cne;
        this.nom = nom;
        this.prenom = prenom;
        this.notes = new ArrayList<>();
    }

    // Constructeur de copie : copie profonde de la liste des notes
    public Etudiant(Etudiant autre) {
        this.cne = autre.cne;
        this.nom = autre.nom;
        this.prenom = autre.prenom;
        this.notes = new ArrayList<>(autre.notes);
    }

    public void ajouterNote(double note) {
        if (note < 0 || note > 20) {
            throw new IllegalArgumentException("La note doit appartenir à [0, 20] : " + note);
        }
        notes.add(note);
    }

    public int nombreNotes() {
        return notes.size();
    }

    public double moyenne() {
        if (notes.isEmpty()) {
            return 0.0;
        }
        double s = 0;
        for (double n : notes) {
            s += n;
        }
        return s / notes.size();
    }

    public boolean estAdmis() {
        return moyenne() >= SEUIL_VALIDATION;
    }

    @Override
    public String toString() {
        return "Etudiant " + cne + " : " + prenom + " " + nom;
    }
}