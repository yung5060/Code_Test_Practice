import java.util.Scanner;

public class bj2525 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
        a += (b + c) / 60;
        b = (b + c) % 60;
        if (a >= 24) {
            a -= 24;
        }
        System.out.println(a + " " + b);
        sc.close();
    }
}
