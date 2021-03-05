/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package URI.Iniciante;

import java.util.Scanner;

/**
 *
 * @author Johnata
 */

/*
+---------------------------------------------------+
|   URI    	|   www.urionlinejudge.com.br	    |
|---------------------------------------------------|
|   NOME                    |                       |
|---------------------------------------------------|
|   Johnata Davi 	    |   	            |
+---------------------------------------------------+
|   GITHUB 	|   www.github.com/JohnataDavi      |
+---------------------------------------------------+
|   LINKEDIN	|   www.linkedin.com/in/johnatadavi |
+---------------------------------------------------+
*/
public class Area_1012 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        double c = sc.nextDouble();
        double tri = (a * c) / 2;
        double cir = 3.14159 * Math.pow(c, 2);
        double tra = (a + b) * c / 2;
        double qua = Math.pow(b, 2);
        double ret = a * b;
        System.out.printf("TRIANGULO: %.3f%n", tri);
        System.out.printf("CIRCULO: %.3f%n", cir);
        System.out.printf("TRAPEZIO: %.3f%n", tra);
        System.out.printf("QUADRADO: %.3f%n", qua);
        System.out.printf("RETANGULO: %.3f%n", ret);
    }
}
