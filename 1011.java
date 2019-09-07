package URI.Iniciante;

import java.math.*;
import java.util.Scanner;

/**
 *
 * @author Johnata
 */
public class Esfera_1011 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        double e = (4.0/3) * 3.14159 * Math.pow(r, 3);
        System.out.printf("VOLUME = %.3f%n", e);
    }
}
