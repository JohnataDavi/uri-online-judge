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
public class Iccanobif_2807 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int prox = 1, ant = 0, res = 0;
        int vet[] = new int[n];
        vet[n - 1] = 1;

        for (int i = 1; i < n; i++) {
            res = prox + ant;
            vet[n - i - 1] = res;
            ant = prox;
            prox = res;
        }

        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                System.out.print(vet[i]);
            } else {
                System.out.print(vet[i] + " ");
            }
        }
        System.out.print("\n");
    }
}
