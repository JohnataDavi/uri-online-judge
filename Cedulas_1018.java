/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package URI.Iniciante;

import java.text.DecimalFormat;
import java.util.Scanner;

/**
 *
 * @author Johnata
 */
public class Cedulas_1018 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        double valor = sc.nextDouble();
        if (valor >= 0 && valor <= 1000000.00) {
            double n, val, res = 0;
            DecimalFormat df = new DecimalFormat("0,00");
            double[] aux = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
            valor *= 100;
            for (int i = 0; i < 12; i++) {
                if (i < 7) {
                    n = valor % aux[i];
                    val = valor - n;
                    res = (val / aux[i]);
                    valor -= val;
                    System.out.println((int) res + " nota(s) de R$ " + aux[i] / 100 + "0");
                } else {
                    n = valor % aux[i];
                    val = valor - n;
                    res = (val / aux[i]);
                    valor -= val;
                    if (i == 6) {
                        System.out.println("MOEDAS:");
                    }
                    if (i == 8 || i == 10 || i == 11) {
                        DecimalFormat df = new DecimalFormat("0.00");
                        System.out.println((int) res + " moeda(s) de R$ " + df.format(aux[i] / 100));
                    } else {
                        System.out.println((int) res + " moeda(s) de R$ " + aux[i] / 100 + "0");
                    }
                }
            }
        }
    }
}
