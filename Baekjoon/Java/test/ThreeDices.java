import java.util.Scanner;
import java.lang.Math;

public class ThreeDices {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
        if (a == b && b == c) {
            System.out.println(10000 + a * 1000);
        } else if (a == b || b == c) {
            System.out.println(1000 + b * 100);
        } else if (a == c) {
            System.out.println(1000 + a * 100);
        } else {
            int max = Math.max(Math.max(a, b), c);
            System.out.println(max * 100);
        }
        sc.close();
    }
}