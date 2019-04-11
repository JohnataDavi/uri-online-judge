
package URI.Iniciante;

import java.util.Scanner;

public class DistanciaEntreDoisPontos_1015 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double x1 = sc.nextDouble();
        double y1 = sc.nextDouble();
        double x2 = sc.nextDouble();
        double y2 = sc.nextDouble();
        System.out.printf("%.4f",Math.sqrt(Math.pow((x2-x1), 2) + Math.pow((y2-y1), 2)));
    }
}
