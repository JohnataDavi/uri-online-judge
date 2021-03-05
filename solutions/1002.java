import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        double r = sc.nextDouble();
        r *= r;
        double a = 3.14159 * r;
        System.out.printf("A=%.4f%n", a);
    }

}