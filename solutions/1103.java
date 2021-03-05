import java.io.IOException;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        int cond = 1;
        while (cond != 0) {
            int h1 = sc.nextInt();
            int m1 = sc.nextInt();
            int h2 = sc.nextInt();
            int m2 = sc.nextInt();
            if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) {
                cond = 0;
            } else {
                int sh1 = 0, sh2 = 0, res = 0;
                h1 *= 60;
                h2 *= 60;
                sh1 = h1 + m1;
                sh2 = h2 + m2;
                if (sh2 < sh1) {
                    h2 = 1440 + sh2;
                    res = h2 - sh1;
                    System.out.println(res);
                } else {
                    res = sh2 - sh1;
                    System.out.println(res);
                }
            }
        }

    }

}