import java.util.Scanner;

public class bj2884 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt(), B = sc.nextInt();
        if (B < 45) {
            if (A == 0) {
                A = 23;
            } else {
                A -= 1;
            }
            B = 60 + (B - 45);
        } else {
            B -= 45;
        }
        System.out.println(A + " " + B);
        sc.close();
    }
}
