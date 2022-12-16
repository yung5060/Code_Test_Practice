import java.util.Scanner;
import java.lang.Math;

public class bj2908 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt(), B = sc.nextInt(), a = 0, b = 0, tmp = 100;
        while (A > 0 || B > 0) {
            a += (A % 10) * tmp;
            b += (B % 10) * tmp;
            A /= 10;
            B /= 10;
            tmp /= 10;
        }
        System.out.println(Math.max(a, b));
        sc.close();
    }
}
