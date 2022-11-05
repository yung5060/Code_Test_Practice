import java.util.Scanner;

public class CheckAlphabet {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        for (int i = 0; i < 26; i++) {
            char c = (char) (i + 97);
            System.out.print(s.indexOf(c) + " ");
        }
        sc.close();
    }
}
