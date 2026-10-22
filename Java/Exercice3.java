import java.util.ArrayList;
import java.util.List;
   public class Exercice3 {
      public static void moyenne(ArrayList<Double> notes) {
         double somme = 0;
         for (double note : notes) {
            somme += note;
         }
         System.out.printf("Moyenne : %.2f%n", somme / notes.size());
      }
  public static String mention(double m) {
      if (m < 10) {
         return "Insuffisant";
      } else if (m < 12) {
         return "Passable";
      } else if (m < 14) {
         return "Assez bien";
      } else if (m < 16) {
         return "Bien";
      } else {
         return "Très bien";
      }
   }