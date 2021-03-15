import java.io.IOException;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) throws IOException {
Scanner sc = new Scanner(System.in);
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        double m = (((a * 3.5) + (b * 7.5)) / 11);
        System.out.printf("MEDIA = %.5f%n" ,m);
    }
 
}