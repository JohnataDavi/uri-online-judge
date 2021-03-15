import java.io.IOException;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner sc = new Scanner(System.in);
        while (sc.hasNextInt()) {
            int n = 0, num = 0, cont = 0, aux = 0, cont2 = 0;
            n = sc.nextInt();
            int[] vet = new int[n];
            for (int i = 0; i < n; i++) {
                vet[i] = sc.nextInt();
            }
            for (int i = 0; i < vet.length; i++) {
                for (int j = 0; j < vet.length - 1; j++) {
                    if (vet[j] > vet[j + 1]) {
                        aux = vet[j];
                        vet[j] = vet[j + 1];
                        vet[j + 1] = aux;
                    }
                }
            }
            for (int i = 0; i < vet.length; i++) {
                cont = 0;
                num = vet[i];
                for (int j = 0; j < vet.length; j++) {
                    if (vet[i] == vet[j] && vet[i] != 0 && vet[j] != 0 && vet[j] != cont2) {
                        cont++;
                    }
                }
                cont2 = vet[i];
                if (cont != 0 && vet[i] != 0) {
                    System.out.println(num + " aparece " + cont + " vez(es)");
                }
            }
        }
 
    }
 
}