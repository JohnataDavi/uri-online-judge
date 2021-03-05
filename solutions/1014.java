package URI.Iniciante;

import java.util.Scanner;
/*
+---------------------------------------------------+
|   URI    	    |   www.urionlinejudge.com.br	    |
|---------------------------------------------------|
|   NOME                |                           |
|---------------------------------------------------|
|   Johnata Davi 	    |   	                    |
+---------------------------------------------------+
|   GITHUB 	    |   www.github.com/JohnataDavi      |
+---------------------------------------------------+
|   LINKEDIN	|   www.linkedin.com/in/johnatadavi |
+---------------------------------------------------+
*/
public class Consumo_1014 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int d = sc.nextInt();
        double c = sc.nextDouble();
        double r = d / c;
        System.out.printf("%.3f%s",r," km/l");
    }
}
