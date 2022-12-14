import java.util.Scanner;

public class bj2588 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt(), B = sc.nextInt();
        int tmp = B;
        while (tmp > 0) {
            System.out.println(A * (tmp % 10));
            tmp /= 10;
        }
        System.out.println(A * B);
        sc.close();
    }
}