package URI.Iniciante;

import java.util.Scanner;
/**
 *
 * @author Johnata
 */
public class Entrada_e_Saida_CPF_2763 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String cpf = sc.next();
        System.out.println(cpf.substring(0,3));
        System.out.println(cpf.substring(4,7));
        System.out.println(cpf.substring(8,11));
        System.out.println(cpf.substring(12,14));
    }
}
