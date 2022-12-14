import java.util.Scanner;
import java.lang.Math;

public class Constant {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next(), b = sc.next();
        int A = 0, B = 0;
        for (int i = 0; i < 3; i++) {
            A += (a.charAt(i) - 48) * Math.pow(10, i);
            B += (b.charAt(i) - 48) * Math.pow(10, i);
        }
        int max = (A > B) ? A : B;
        System.out.println(max);
        sc.close();
    }
}
