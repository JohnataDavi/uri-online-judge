import java.io.IOException;
 
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner sc = new Scanner(System.in);

        long dec = 0;
        String hex = "";

        while (dec != -1) {
            try {
                dec = sc.nextLong();
                if (dec == -1) break;
                System.out.println("0x" + decToHex(dec));
            } catch (Exception e) {
                hex = sc.next();
                System.out.println(hexToDec(hex.substring(2)));
            }
        }
 
    }
    
        public static String decToHex(long dec) {
        ArrayList<String> hexList = new ArrayList<String>();
        long resto;
        String hex = "";
        while (dec != 0) {
            resto = dec % 16;
            if (resto == 10) {
                hexList.add("A");
            } else if (resto == 11) {
                hexList.add("B");
            } else if (resto == 12) {
                hexList.add("C");
            } else if (resto == 13) {
                hexList.add("D");
            } else if (resto == 14) {
                hexList.add("E");
            } else if (resto == 15) {
                hexList.add("F");
            } else {
                hexList.add(Long.toString(resto));
            }
            dec /= 16;
        }
        Collections.reverse(hexList);
        for (String s : hexList) {
            hex += s;
        }
        return hex;
    }

    public static Long hexToDec(String hex) {
        return Long.parseLong(hex, 16);
    }

 
}