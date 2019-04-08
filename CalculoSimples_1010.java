package URI.Iniciante;

import java.util.Scanner;

public class CalculoSimples_1010 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int c = sc.nextInt();
        int n = sc.nextInt();
        double v = sc.nextDouble();
        int c2 = sc.nextInt();
        int n2 = sc.nextInt();
        double v2 = sc.nextDouble();
        double t = (n * v) + (n2 * v2);
        System.out.printf("VALOR A PAGAR: R$ %.2f%n", t);
    }
}
