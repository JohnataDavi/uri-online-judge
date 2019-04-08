
package URI.Iniciante;

import java.util.Scanner;

public class Consumo_1014 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int d = sc.nextInt();
        double c = sc.nextDouble();
        double r = d / c;
        System.out.printf("%.3f%s",r," km/l");
    }
}
