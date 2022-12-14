import java.util.Scanner;
import java.lang.Math;

public class bj2480 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
        if (a == b && b == c) {
            System.out.println(10000 + a * 1000);
        } else if (a != b && b != c && c != a) {
            int max = Math.max(a, b);
            max = Math.max(max, c);
            System.out.println(max * 100);
        } else {
            if (a == b) {
                System.out.println(1000 + a * 100);
            } else {
                System.out.println(1000 + c * 100);
            }
        }
        sc.close();
    }
}
