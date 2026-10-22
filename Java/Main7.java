// Main7.java : TP1, Exercice 7 (Java)
public class Main7 {
    public static void main(String[] args) {
        final int N = 10000000;

        long debut = System.nanoTime();
        long somme = 0;
        for (int i = 0; i < N; i++) {
            somme += i % 7;
        }
        long fin = System.nanoTime();

        System.out.println("Somme : " + somme);
        System.out.println("Duree : " + (fin - debut) / 1000000.0 + " ms");
    }
}