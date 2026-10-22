// Main6.java : TP1, Exercice 6 (Java)
import java.util.HashSet;

public class Main6 {
    public static void main(String[] args) {
        // Étape 1
        Etudiant a = new Etudiant("D123456789", "Alaoui", "Sara");
        Etudiant b = a;                                             // alias
        Etudiant c = new Etudiant("D123456789", "Alaoui", "Sara");  // doublon
        Etudiant d = new Etudiant("R135551234", "Alaoui", "Sara");  // homonyme

        // Étape 2 : identité (==), égalité (equals), taille du HashSet
        System.out.println("Identité (==) : a==b " + (a == b)
                + " | a==c " + (a == c) + " | a==d " + (a == d));
        System.out.println("Égalité (equals) : a.equals(b) " + a.equals(b)
                + " | a.equals(c) " + a.equals(c) + " | a.equals(d) " + a.equals(d));

        HashSet<Etudiant> ensemble = new HashSet<>();
        ensemble.add(a);
        ensemble.add(b);
        ensemble.add(c);
        ensemble.add(d);
        System.out.println("Taille du HashSet : " + ensemble.size());

        // Étape 4 : comparaison de chaînes
        String s1 = "bonjour";
        String s2 = new String("bonjour");   // construite à l'exécution
        System.out.println("s1 == s2 : " + (s1 == s2));
        System.out.println("s1.equals(s2) : " + s1.equals(s2));
    }
}

